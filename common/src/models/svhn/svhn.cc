/*
 * Copyright 2021 The CFU-Playground Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "models/svhn/svhn.h"

#include <stdio.h>

#include "menu.h"
// comment the next 5 lines to use from versions 2.0.0 to 2.5.1.1
#include "models/svhn/image_0.cc"
#include "models/svhn/image_1.cc"
#include "models/svhn/image_2.cc"
#include "models/svhn/image_3.cc"
#include "models/svhn/image_4.cc"

// Uncomment the next four lines to use from versions 2.0.0 to 2.5.1.1
//#include "models/svhn/image_0_result_2.cc"
//#include "models/svhn/image_1_result_9.cc"
//#include "models/svhn/image_2_result_5.cc"
//#include "models/svhn/image_3_result_4.cc"
#include "models/svhn/model_svhn.h"
#include "tflite.h"

extern "C" {  
#include "fb_util.h"
};

#define NUM_GOLDEN 5                    // Change the number to 4 to use from versions 2.0.0 to 2.5.1.1 and to 5 for versions 2.5.1.2 and 2.5.4.2
struct golden_test_svhn {
  const unsigned char *data;
  int8_t expected;
};

struct golden_test_svhn golden_test_svhn[] = {
// comment the next 5 lines to use from versions 2.0.0 to 2.5.1.1
    {image_0, 5},
    {image_1, 1},
    {image_2, 8},
    {image_3, 9},
    {image_4, 4},
// Uncomment the next four lines to use from versions 2.0.0 to 2.5.1.1
    //{image_0, 2},
    //{image_1, 9},
    //{image_2, 5},
    //{image_3, 4},
   
};

// Initialize everything once
// deallocate tensors when done
static void svhn_init(void) {
  tflite_load_model(model_svhn, model_svhn_len);
}

// Run classification, after input has been loaded
static int32_t svhn_classify() {
  printf("Running svhn\n");
  tflite_classify();

  // Process the inference results.
  int8_t* output = tflite_get_output();
  int pred_score = -300; 
  int pred_idx = -1; 
  for(int i = 0; i < 10; i++){
    // printf("%d\n",output[i]);
    if(output[i] > pred_score){
      pred_score = output[i]; 
      pred_idx = i;
    }
    
  }
  pred_idx = (pred_idx==9)? 0 : (pred_idx+1);
  return pred_idx;
}

static void do_golden_tests() {
  bool failed = false;

#ifdef CSR_VIDEO_FRAMEBUFFER_BASE
  char msg_buff[256] = { 0 };
#endif  

  for (size_t i = 0; i < NUM_GOLDEN; i++) {
    tflite_set_input_unsigned(golden_test_svhn[i].data);
    int actual = svhn_classify();
    int expected = golden_test_svhn[i].expected;
    if (actual != expected) {
      failed = true;
      printf("*** Golden test %d failed: %d (actual) != %d (expected))\n", i, actual, expected);
    }

#ifdef CSR_VIDEO_FRAMEBUFFER_BASE
    fb_clear();
    memset(msg_buff, 0x00, sizeof(msg_buff));
    snprintf(msg_buff, sizeof(msg_buff), "Run golden tests %d", i);
    fb_draw_string(0, 10, 0x007FFF00, (const char *)msg_buff);
    fb_draw_buffer(0, 50, 160, 160, (const uint8_t *)golden_test_svhn[i].data, 3);
    memset(msg_buff, 0x00, sizeof(msg_buff));
    snprintf(msg_buff, sizeof(msg_buff), "Result is %d, Expected is %d", actual, expected);
    fb_draw_string(0, 220, 0x007FFF00, (const char *)msg_buff);
    flush_cpu_dcache();
    flush_l2_cache();
#endif  
  }

  if (failed) {
    puts("FAIL Golden tests failed");
  } else {
    puts("OK   Golden tests passed");
  }
}

static struct Menu MENU = {
    "Tests for svhn model",
    "svhn",
    {
        MENU_ITEM('g', "Run golden tests (check for expected outputs)", do_golden_tests),
        MENU_END,
    },
};

// For integration into menu system
void svhn_menu() {
  svhn_init();

#ifdef CSR_VIDEO_FRAMEBUFFER_BASE
  fb_init();
  flush_cpu_dcache();
  flush_l2_cache();
#endif

  menu_run(&MENU);
}
