
// This is a TensorFlow Lite model file that has been converted into a C data
// array using the tensorflow.lite.util.convert_bytes_to_c_source() function.
// This form is useful for compiling into a binary for devices that don't have a
// file system.


// We need to keep the data array aligned on some architectures.

const unsigned char image_3[4096] = {
    0x24, 0x2a, 0x42, 0x00, 0x23, 0x29, 0x40, 0x00, 0x22, 0x28, 0x3e, 0x00, 0x25,
    0x2a, 0x3f, 0x00, 0x28, 0x2d, 0x41, 0x00, 0x2a, 0x2f, 0x43, 0x00, 0x29, 0x2e,
    0x42, 0x00, 0x26, 0x2b, 0x3f, 0x00, 0x22, 0x28, 0x3c, 0x00, 0x1d, 0x23, 0x38,
    0x00, 0x1d, 0x24, 0x39, 0x00, 0x21, 0x29, 0x3c, 0x00, 0x23, 0x2a, 0x3d, 0x00,
    0x23, 0x2a, 0x3c, 0x00, 0x23, 0x2a, 0x3a, 0x00, 0x28, 0x30, 0x3c, 0x00, 0x2a,
    0x33, 0x3c, 0x00, 0x27, 0x32, 0x38, 0x00, 0x23, 0x2e, 0x32, 0x00, 0x20, 0x2b,
    0x2f, 0x00, 0x20, 0x2b, 0x2f, 0x00, 0x20, 0x2b, 0x31, 0x00, 0x22, 0x2d, 0x34,
    0x00, 0x24, 0x2e, 0x37, 0x00, 0x22, 0x2c, 0x38, 0x00, 0x21, 0x29, 0x39, 0x00,
    0x21, 0x29, 0x3b, 0x00, 0x25, 0x2e, 0x43, 0x00, 0x29, 0x34, 0x4b, 0x00, 0x2d,
    0x37, 0x4f, 0x00, 0x2d, 0x37, 0x51, 0x00, 0x2d, 0x37, 0x52, 0x00, 0x20, 0x27,
    0x3f, 0x00, 0x20, 0x27, 0x3e, 0x00, 0x22, 0x28, 0x3e, 0x00, 0x26, 0x2b, 0x3f,
    0x00, 0x29, 0x2e, 0x42, 0x00, 0x2a, 0x30, 0x43, 0x00, 0x27, 0x2c, 0x40, 0x00,
    0x24, 0x28, 0x3c, 0x00, 0x20, 0x25, 0x39, 0x00, 0x1c, 0x22, 0x37, 0x00, 0x1f,
    0x25, 0x3a, 0x00, 0x25, 0x2b, 0x3f, 0x00, 0x2a, 0x2f, 0x43, 0x00, 0x2c, 0x32,
    0x45, 0x00, 0x2e, 0x35, 0x45, 0x00, 0x34, 0x3c, 0x48, 0x00, 0x36, 0x3f, 0x48,
    0x00, 0x33, 0x3d, 0x43, 0x00, 0x2e, 0x38, 0x3d, 0x00, 0x2b, 0x35, 0x39, 0x00,
    0x2a, 0x34, 0x39, 0x00, 0x27, 0x31, 0x37, 0x00, 0x26, 0x30, 0x36, 0x00, 0x26,
    0x30, 0x38, 0x00, 0x23, 0x2c, 0x38, 0x00, 0x21, 0x29, 0x38, 0x00, 0x21, 0x29,
    0x3a, 0x00, 0x24, 0x2d, 0x41, 0x00, 0x28, 0x32, 0x48, 0x00, 0x2a, 0x34, 0x4c,
    0x00, 0x2b, 0x35, 0x4f, 0x00, 0x2b, 0x35, 0x50, 0x00, 0x1c, 0x24, 0x3b, 0x00,
    0x1f, 0x27, 0x3d, 0x00, 0x24, 0x2c, 0x41, 0x00, 0x29, 0x31, 0x42, 0x00, 0x2c,
    0x33, 0x45, 0x00, 0x2c, 0x33, 0x45, 0x00, 0x27, 0x2d, 0x3f, 0x00, 0x21, 0x27,
    0x39, 0x00, 0x1d, 0x22, 0x35, 0x00, 0x1d, 0x22, 0x36, 0x00, 0x24, 0x29, 0x3d,
    0x00, 0x2e, 0x33, 0x47, 0x00, 0x36, 0x3b, 0x4e, 0x00, 0x3c, 0x41, 0x54, 0x00,
    0x40, 0x47, 0x57, 0x00, 0x46, 0x4d, 0x5b, 0x00, 0x48, 0x4f, 0x5a, 0x00, 0x44,
    0x4d, 0x54, 0x00, 0x3f, 0x48, 0x4e, 0x00, 0x3b, 0x44, 0x4a, 0x00, 0x3a, 0x43,
    0x48, 0x00, 0x33, 0x3c, 0x41, 0x00, 0x2e, 0x37, 0x3c, 0x00, 0x2b, 0x34, 0x3b,
    0x00, 0x26, 0x2f, 0x38, 0x00, 0x21, 0x2b, 0x37, 0x00, 0x20, 0x29, 0x38, 0x00,
    0x23, 0x2b, 0x3e, 0x00, 0x26, 0x2e, 0x43, 0x00, 0x25, 0x2f, 0x47, 0x00, 0x25,
    0x30, 0x4a, 0x00, 0x26, 0x30, 0x4b, 0x00, 0x1d, 0x25, 0x3a, 0x00, 0x23, 0x2c,
    0x3f, 0x00, 0x2c, 0x35, 0x46, 0x00, 0x34, 0x3b, 0x4b, 0x00, 0x35, 0x3d, 0x4c,
    0x00, 0x32, 0x3a, 0x48, 0x00, 0x2c, 0x33, 0x42, 0x00, 0x25, 0x2a, 0x39, 0x00,
    0x20, 0x25, 0x34, 0x00, 0x25, 0x2a, 0x3a, 0x00, 0x2e, 0x35, 0x45, 0x00, 0x3b,
    0x41, 0x52, 0x00, 0x46, 0x4a, 0x5b, 0x00, 0x4e, 0x52, 0x62, 0x00, 0x52, 0x59,
    0x67, 0x00, 0x57, 0x5e, 0x6b, 0x00, 0x57, 0x5f, 0x6a, 0x00, 0x53, 0x5c, 0x65,
    0x00, 0x4f, 0x57, 0x5f, 0x00, 0x4d, 0x55, 0x5b, 0x00, 0x4c, 0x55, 0x5a, 0x00,
    0x41, 0x49, 0x4e, 0x00, 0x37, 0x3f, 0x44, 0x00, 0x33, 0x3c, 0x41, 0x00, 0x2b,
    0x34, 0x3c, 0x00, 0x24, 0x2d, 0x38, 0x00, 0x1f, 0x29, 0x36, 0x00, 0x21, 0x2a,
    0x3a, 0x00, 0x23, 0x2b, 0x3f, 0x00, 0x22, 0x2a, 0x42, 0x00, 0x21, 0x2a, 0x44,
    0x00, 0x21, 0x2b, 0x45, 0x00, 0x21, 0x29, 0x3d, 0x00, 0x29, 0x32, 0x44, 0x00,
    0x35, 0x3e, 0x4e, 0x00, 0x3e, 0x46, 0x54, 0x00, 0x40, 0x47, 0x54, 0x00, 0x3c,
    0x43, 0x4f, 0x00, 0x34, 0x3a, 0x45, 0x00, 0x2b, 0x31, 0x3d, 0x00, 0x26, 0x2b,
    0x38, 0x00, 0x2b, 0x30, 0x3d, 0x00, 0x35, 0x3b, 0x48, 0x00, 0x43, 0x48, 0x56,
    0x00, 0x4e, 0x51, 0x60, 0x00, 0x55, 0x58, 0x67, 0x00, 0x58, 0x5d, 0x6a, 0x00,
    0x5a, 0x5f, 0x6b, 0x00, 0x58, 0x5e, 0x6a, 0x00, 0x53, 0x5b, 0x65, 0x00, 0x51,
    0x57, 0x60, 0x00, 0x50, 0x57, 0x5e, 0x00, 0x50, 0x59, 0x5e, 0x00, 0x48, 0x4f,
    0x54, 0x00, 0x3f, 0x46, 0x4b, 0x00, 0x39, 0x42, 0x46, 0x00, 0x2f, 0x38, 0x3e,
    0x00, 0x26, 0x2e, 0x37, 0x00, 0x20, 0x29, 0x33, 0x00, 0x1f, 0x28, 0x37, 0x00,
    0x20, 0x28, 0x3c, 0x00, 0x1f, 0x26, 0x3c, 0x00, 0x1e, 0x27, 0x3e, 0x00, 0x1d,
    0x28, 0x40, 0x00, 0x26, 0x2e, 0x40, 0x00, 0x30, 0x38, 0x49, 0x00, 0x3d, 0x46,
    0x55, 0x00, 0x47, 0x4f, 0x5a, 0x00, 0x48, 0x50, 0x5a, 0x00, 0x44, 0x4b, 0x55,
    0x00, 0x3c, 0x40, 0x49, 0x00, 0x33, 0x37, 0x40, 0x00, 0x2e, 0x32, 0x3c, 0x00,
    0x31, 0x35, 0x3f, 0x00, 0x3b, 0x3f, 0x49, 0x00, 0x48, 0x4c, 0x57, 0x00, 0x51,
    0x53, 0x5f, 0x00, 0x54, 0x57, 0x63, 0x00, 0x53, 0x57, 0x63, 0x00, 0x51, 0x55,
    0x61, 0x00, 0x4d, 0x51, 0x5d, 0x00, 0x48, 0x4e, 0x59, 0x00, 0x47, 0x4c, 0x56,
    0x00, 0x49, 0x4e, 0x56, 0x00, 0x4c, 0x53, 0x59, 0x00, 0x4b, 0x51, 0x55, 0x00,
    0x47, 0x4c, 0x50, 0x00, 0x3f, 0x47, 0x4a, 0x00, 0x34, 0x3b, 0x40, 0x00, 0x28,
    0x2f, 0x37, 0x00, 0x20, 0x28, 0x32, 0x00, 0x1e, 0x26, 0x35, 0x00, 0x1e, 0x27,
    0x38, 0x00, 0x1d, 0x25, 0x38, 0x00, 0x1c, 0x26, 0x3b, 0x00, 0x1c, 0x27, 0x3d,
    0x00, 0x28, 0x31, 0x43, 0x00, 0x33, 0x3d, 0x4c, 0x00, 0x43, 0x4c, 0x57, 0x00,
    0x4d, 0x54, 0x5d, 0x00, 0x4d, 0x54, 0x5c, 0x00, 0x48, 0x4f, 0x56, 0x00, 0x3f,
    0x44, 0x4a, 0x00, 0x38, 0x3c, 0x41, 0x00, 0x34, 0x38, 0x3e, 0x00, 0x36, 0x39,
    0x40, 0x00, 0x3f, 0x42, 0x4a, 0x00, 0x4b, 0x4e, 0x58, 0x00, 0x50, 0x52, 0x5d,
    0x00, 0x4e, 0x50, 0x5d, 0x00, 0x47, 0x4a, 0x57, 0x00, 0x40, 0x42, 0x50, 0x00,
    0x3a, 0x3c, 0x49, 0x00, 0x34, 0x39, 0x44, 0x00, 0x36, 0x39, 0x44, 0x00, 0x3a,
    0x3e, 0x48, 0x00, 0x41, 0x47, 0x4e, 0x00, 0x4b, 0x50, 0x54, 0x00, 0x4e, 0x53,
    0x55, 0x00, 0x47, 0x4d, 0x50, 0x00, 0x3b, 0x40, 0x45, 0x00, 0x2d, 0x33, 0x3b,
    0x00, 0x22, 0x29, 0x34, 0x00, 0x1f, 0x27, 0x33, 0x00, 0x1f, 0x28, 0x36, 0x00,
    0x20, 0x29, 0x39, 0x00, 0x20, 0x2a, 0x3d, 0x00, 0x20, 0x2b, 0x3f, 0x00, 0x29,
    0x32, 0x43, 0x00, 0x35, 0x3e, 0x4c, 0x00, 0x45, 0x4e, 0x57, 0x00, 0x4e, 0x56,
    0x5c, 0x00, 0x4e, 0x55, 0x5a, 0x00, 0x48, 0x4f, 0x54, 0x00, 0x40, 0x46, 0x48,
    0x00, 0x39, 0x3f, 0x41, 0x00, 0x37, 0x3b, 0x3e, 0x00, 0x3c, 0x3e, 0x43, 0x00,
    0x45, 0x47, 0x4d, 0x00, 0x4f, 0x51, 0x59, 0x00, 0x51, 0x53, 0x5d, 0x00, 0x4c,
    0x4c, 0x58, 0x00, 0x40, 0x41, 0x4e, 0x00, 0x34, 0x35, 0x42, 0x00, 0x2a, 0x2c,
    0x39, 0x00, 0x25, 0x29, 0x35, 0x00, 0x2b, 0x2d, 0x39, 0x00, 0x34, 0x36, 0x40,
    0x00, 0x3d, 0x42, 0x48, 0x00, 0x4d, 0x51, 0x55, 0x00, 0x55, 0x58, 0x5a, 0x00,
    0x4f, 0x53, 0x55, 0x00, 0x42, 0x46, 0x4a, 0x00, 0x33, 0x38, 0x3e, 0x00, 0x25,
    0x2c, 0x35, 0x00, 0x21, 0x29, 0x34, 0x00, 0x21, 0x29, 0x37, 0x00, 0x23, 0x2c,
    0x3c, 0x00, 0x23, 0x2d, 0x40, 0x00, 0x23, 0x2e, 0x41, 0x00, 0x29, 0x32, 0x41,
    0x00, 0x34, 0x3e, 0x4a, 0x00, 0x44, 0x4d, 0x55, 0x00, 0x4d, 0x55, 0x59, 0x00,
    0x4c, 0x54, 0x56, 0x00, 0x45, 0x4d, 0x4f, 0x00, 0x3e, 0x44, 0x45, 0x00, 0x39,
    0x3e, 0x3e, 0x00, 0x38, 0x3c, 0x3d, 0x00, 0x42, 0x43, 0x46, 0x00, 0x4d, 0x4d,
    0x51, 0x00, 0x55, 0x56, 0x5b, 0x00, 0x55, 0x55, 0x5e, 0x00, 0x4b, 0x4b, 0x56,
    0x00, 0x3c, 0x3b, 0x47, 0x00, 0x2c, 0x2b, 0x39, 0x00, 0x21, 0x21, 0x2f, 0x00,
    0x1c, 0x1e, 0x2b, 0x00, 0x26, 0x26, 0x33, 0x00, 0x32, 0x33, 0x3d, 0x00, 0x3e,
    0x41, 0x48, 0x00, 0x50, 0x52, 0x57, 0x00, 0x59, 0x5b, 0x5e, 0x00, 0x55, 0x58,
    0x59, 0x00, 0x48, 0x4c, 0x4e, 0x00, 0x38, 0x3d, 0x42, 0x00, 0x28, 0x2f, 0x36,
    0x00, 0x22, 0x2a, 0x35, 0x00, 0x22, 0x2b, 0x38, 0x00, 0x26, 0x2e, 0x3f, 0x00,
    0x26, 0x30, 0x42, 0x00, 0x25, 0x30, 0x42, 0x00, 0x27, 0x31, 0x3d, 0x00, 0x33,
    0x3c, 0x46, 0x00, 0x42, 0x4b, 0x52, 0x00, 0x4b, 0x53, 0x56, 0x00, 0x4a, 0x52,
    0x53, 0x00, 0x44, 0x4b, 0x4b, 0x00, 0x3d, 0x42, 0x41, 0x00, 0x38, 0x3d, 0x3c,
    0x00, 0x39, 0x3c, 0x3c, 0x00, 0x44, 0x46, 0x48, 0x00, 0x50, 0x50, 0x54, 0x00,
    0x57, 0x58, 0x5c, 0x00, 0x56, 0x56, 0x5d, 0x00, 0x4a, 0x4a, 0x54, 0x00, 0x38,
    0x39, 0x43, 0x00, 0x27, 0x27, 0x34, 0x00, 0x1d, 0x1b, 0x2a, 0x00, 0x1a, 0x19,
    0x27, 0x00, 0x24, 0x24, 0x31, 0x00, 0x33, 0x33, 0x3e, 0x00, 0x43, 0x44, 0x4d,
    0x00, 0x53, 0x54, 0x5a, 0x00, 0x5c, 0x5d, 0x60, 0x00, 0x59, 0x5a, 0x5c, 0x00,
    0x4d, 0x4f, 0x52, 0x00, 0x3b, 0x3f, 0x44, 0x00, 0x28, 0x2c, 0x34, 0x00, 0x21,
    0x26, 0x32, 0x00, 0x21, 0x28, 0x36, 0x00, 0x26, 0x2d, 0x3d, 0x00, 0x26, 0x2e,
    0x40, 0x00, 0x25, 0x2d, 0x40, 0x00, 0x26, 0x2f, 0x3b, 0x00, 0x31, 0x3a, 0x44,
    0x00, 0x40, 0x49, 0x4f, 0x00, 0x48, 0x50, 0x53, 0x00, 0x48, 0x4f, 0x50, 0x00,
    0x43, 0x49, 0x48, 0x00, 0x3c, 0x40, 0x3f, 0x00, 0x38, 0x3c, 0x3a, 0x00, 0x39,
    0x3d, 0x3c, 0x00, 0x45, 0x47, 0x47, 0x00, 0x51, 0x51, 0x53, 0x00, 0x58, 0x59,
    0x5d, 0x00, 0x59, 0x59, 0x60, 0x00, 0x4e, 0x4c, 0x55, 0x00, 0x39, 0x38, 0x42,
    0x00, 0x23, 0x22, 0x2f, 0x00, 0x17, 0x16, 0x24, 0x00, 0x17, 0x16, 0x24, 0x00,
    0x24, 0x23, 0x30, 0x00, 0x35, 0x34, 0x40, 0x00, 0x46, 0x45, 0x50, 0x00, 0x56,
    0x57, 0x5d, 0x00, 0x5f, 0x60, 0x63, 0x00, 0x5d, 0x5d, 0x5f, 0x00, 0x50, 0x51,
    0x55, 0x00, 0x3e, 0x41, 0x47, 0x00, 0x2b, 0x2f, 0x37, 0x00, 0x24, 0x29, 0x35,
    0x00, 0x23, 0x29, 0x38, 0x00, 0x25, 0x2c, 0x3c, 0x00, 0x24, 0x2b, 0x3c, 0x00,
    0x22, 0x29, 0x3c, 0x00, 0x27, 0x2f, 0x3a, 0x00, 0x31, 0x39, 0x43, 0x00, 0x3e,
    0x47, 0x4d, 0x00, 0x46, 0x4e, 0x51, 0x00, 0x46, 0x4d, 0x4e, 0x00, 0x41, 0x47,
    0x47, 0x00, 0x3a, 0x3e, 0x3d, 0x00, 0x36, 0x3a, 0x39, 0x00, 0x38, 0x3c, 0x3b,
    0x00, 0x43, 0x46, 0x44, 0x00, 0x4f, 0x51, 0x51, 0x00, 0x58, 0x59, 0x5e, 0x00,
    0x5c, 0x5c, 0x63, 0x00, 0x51, 0x50, 0x59, 0x00, 0x3a, 0x38, 0x44, 0x00, 0x21,
    0x20, 0x2d, 0x00, 0x14, 0x13, 0x21, 0x00, 0x16, 0x15, 0x23, 0x00, 0x25, 0x25,
    0x31, 0x00, 0x36, 0x36, 0x42, 0x00, 0x46, 0x46, 0x50, 0x00, 0x59, 0x59, 0x60,
    0x00, 0x63, 0x64, 0x67, 0x00, 0x60, 0x61, 0x63, 0x00, 0x52, 0x54, 0x57, 0x00,
    0x40, 0x43, 0x49, 0x00, 0x30, 0x34, 0x3c, 0x00, 0x29, 0x2e, 0x3a, 0x00, 0x26,
    0x2c, 0x3b, 0x00, 0x24, 0x2b, 0x3a, 0x00, 0x20, 0x27, 0x39, 0x00, 0x1e, 0x25,
    0x38, 0x00, 0x29, 0x30, 0x3b, 0x00, 0x32, 0x3b, 0x44, 0x00, 0x3f, 0x48, 0x4e,
    0x00, 0x48, 0x4e, 0x52, 0x00, 0x48, 0x4e, 0x4f, 0x00, 0x42, 0x48, 0x48, 0x00,
    0x3a, 0x3f, 0x3e, 0x00, 0x35, 0x39, 0x38, 0x00, 0x36, 0x39, 0x39, 0x00, 0x40,
    0x42, 0x42, 0x00, 0x4c, 0x4c, 0x4e, 0x00, 0x54, 0x55, 0x59, 0x00, 0x58, 0x57,
    0x5e, 0x00, 0x4e, 0x4d, 0x57, 0x00, 0x3b, 0x3a, 0x46, 0x00, 0x26, 0x25, 0x32,
    0x00, 0x1c, 0x1b, 0x28, 0x00, 0x1f, 0x1e, 0x2b, 0x00, 0x2d, 0x2c, 0x38, 0x00,
    0x3c, 0x3b, 0x47, 0x00, 0x49, 0x49, 0x53, 0x00, 0x5a, 0x5a, 0x61, 0x00, 0x62,
    0x64, 0x67, 0x00, 0x5d, 0x61, 0x63, 0x00, 0x50, 0x53, 0x57, 0x00, 0x3f, 0x42,
    0x49, 0x00, 0x30, 0x34, 0x3d, 0x00, 0x29, 0x2e, 0x3a, 0x00, 0x26, 0x2c, 0x3b,
    0x00, 0x24, 0x2b, 0x3c, 0x00, 0x22, 0x29, 0x3c, 0x00, 0x21, 0x28, 0x3b, 0x00,
    0x29, 0x31, 0x3c, 0x00, 0x33, 0x3c, 0x45, 0x00, 0x40, 0x49, 0x4f, 0x00, 0x4a,
    0x4e, 0x53, 0x00, 0x49, 0x4e, 0x50, 0x00, 0x42, 0x48, 0x49, 0x00, 0x39, 0x3e,
    0x3f, 0x00, 0x33, 0x37, 0x38, 0x00, 0x33, 0x36, 0x37, 0x00, 0x3d, 0x3f, 0x41,
    0x00, 0x48, 0x49, 0x4d, 0x00, 0x51, 0x52, 0x58, 0x00, 0x57, 0x56, 0x5e, 0x00,
    0x51, 0x50, 0x5a, 0x00, 0x42, 0x42, 0x4e, 0x00, 0x33, 0x33, 0x3e, 0x00, 0x2c,
    0x2c, 0x38, 0x00, 0x2f, 0x30, 0x3c, 0x00, 0x3b, 0x3b, 0x48, 0x00, 0x47, 0x47,
    0x53, 0x00, 0x51, 0x52, 0x5b, 0x00, 0x5c, 0x5e, 0x63, 0x00, 0x60, 0x63, 0x66,
    0x00, 0x5b, 0x5f, 0x62, 0x00, 0x4e, 0x51, 0x56, 0x00, 0x3d, 0x41, 0x48, 0x00,
    0x2f, 0x33, 0x3d, 0x00, 0x29, 0x2e, 0x3a, 0x00, 0x26, 0x2c, 0x3b, 0x00, 0x24,
    0x2b, 0x3d, 0x00, 0x23, 0x2a, 0x3d, 0x00, 0x22, 0x29, 0x3c, 0x00, 0x29, 0x31,
    0x3c, 0x00, 0x33, 0x3c, 0x45, 0x00, 0x40, 0x49, 0x50, 0x00, 0x4a, 0x4f, 0x54,
    0x00, 0x49, 0x4e, 0x51, 0x00, 0x42, 0x47, 0x4a, 0x00, 0x39, 0x3d, 0x40, 0x00,
    0x31, 0x35, 0x38, 0x00, 0x2e, 0x32, 0x35, 0x00, 0x3a, 0x3b, 0x40, 0x00, 0x46,
    0x47, 0x4d, 0x00, 0x52, 0x52, 0x5a, 0x00, 0x58, 0x58, 0x62, 0x00, 0x57, 0x57,
    0x61, 0x00, 0x4e, 0x4e, 0x5a, 0x00, 0x44, 0x44, 0x50, 0x00, 0x40, 0x41, 0x4d,
    0x00, 0x43, 0x45, 0x51, 0x00, 0x4c, 0x4e, 0x5b, 0x00, 0x56, 0x58, 0x63, 0x00,
    0x5d, 0x60, 0x67, 0x00, 0x5f, 0x63, 0x67, 0x00, 0x5e, 0x62, 0x65, 0x00, 0x58,
    0x5c, 0x5f, 0x00, 0x4a, 0x4e, 0x53, 0x00, 0x3b, 0x3e, 0x46, 0x00, 0x2e, 0x31,
    0x3d, 0x00, 0x28, 0x2d, 0x3b, 0x00, 0x25, 0x2b, 0x3c, 0x00, 0x23, 0x2a, 0x3c,
    0x00, 0x22, 0x29, 0x3c, 0x00, 0x21, 0x29, 0x3c, 0x00, 0x28, 0x30, 0x3b, 0x00,
    0x32, 0x39, 0x44, 0x00, 0x3f, 0x46, 0x4f, 0x00, 0x4a, 0x4f, 0x55, 0x00, 0x49,
    0x4e, 0x52, 0x00, 0x42, 0x47, 0x4a, 0x00, 0x37, 0x3c, 0x3f, 0x00, 0x2e, 0x32,
    0x36, 0x00, 0x2a, 0x2e, 0x32, 0x00, 0x36, 0x36, 0x3d, 0x00, 0x43, 0x43, 0x4a,
    0x00, 0x50, 0x50, 0x59, 0x00, 0x59, 0x5a, 0x64, 0x00, 0x5b, 0x5c, 0x67, 0x00,
    0x57, 0x58, 0x64, 0x00, 0x52, 0x53, 0x60, 0x00, 0x51, 0x53, 0x5f, 0x00, 0x55,
    0x58, 0x62, 0x00, 0x5d, 0x60, 0x6a, 0x00, 0x65, 0x68, 0x71, 0x00, 0x69, 0x6d,
    0x73, 0x00, 0x63, 0x67, 0x6c, 0x00, 0x5b, 0x5f, 0x63, 0x00, 0x54, 0x58, 0x5c,
    0x00, 0x46, 0x4a, 0x50, 0x00, 0x37, 0x3b, 0x44, 0x00, 0x2a, 0x30, 0x3d, 0x00,
    0x25, 0x2b, 0x3b, 0x00, 0x22, 0x29, 0x3b, 0x00, 0x20, 0x27, 0x3a, 0x00, 0x20,
    0x27, 0x3b, 0x00, 0x20, 0x28, 0x3c, 0x00, 0x27, 0x2e, 0x39, 0x00, 0x31, 0x37,
    0x43, 0x00, 0x3f, 0x44, 0x4f, 0x00, 0x49, 0x4f, 0x56, 0x00, 0x4a, 0x4e, 0x55,
    0x00, 0x43, 0x47, 0x4c, 0x00, 0x38, 0x3b, 0x41, 0x00, 0x2d, 0x31, 0x36, 0x00,
    0x28, 0x2b, 0x31, 0x00, 0x2f, 0x30, 0x38, 0x00, 0x3a, 0x3b, 0x45, 0x00, 0x48,
    0x49, 0x54, 0x00, 0x51, 0x54, 0x60, 0x00, 0x55, 0x59, 0x65, 0x00, 0x55, 0x58,
    0x64, 0x00, 0x54, 0x56, 0x62, 0x00, 0x55, 0x58, 0x63, 0x00, 0x5a, 0x5f, 0x67,
    0x00, 0x62, 0x66, 0x6e, 0x00, 0x69, 0x6c, 0x75, 0x00, 0x6b, 0x71, 0x77, 0x00,
    0x63, 0x68, 0x6d, 0x00, 0x59, 0x5d, 0x62, 0x00, 0x4e, 0x54, 0x59, 0x00, 0x41,
    0x46, 0x4e, 0x00, 0x34, 0x39, 0x44, 0x00, 0x29, 0x2f, 0x3e, 0x00, 0x23, 0x2a,
    0x3b, 0x00, 0x20, 0x27, 0x39, 0x00, 0x1e, 0x25, 0x38, 0x00, 0x1e, 0x26, 0x3a,
    0x00, 0x1f, 0x27, 0x3c, 0x00, 0x26, 0x2c, 0x38, 0x00, 0x30, 0x36, 0x41, 0x00,
    0x3e, 0x44, 0x4e, 0x00, 0x49, 0x4e, 0x57, 0x00, 0x4b, 0x4f, 0x58, 0x00, 0x45,
    0x49, 0x52, 0x00, 0x39, 0x3c, 0x45, 0x00, 0x2e, 0x31, 0x39, 0x00, 0x26, 0x28,
    0x32, 0x00, 0x26, 0x28, 0x33, 0x00, 0x2e, 0x30, 0x3d, 0x00, 0x3b, 0x3d, 0x4a,
    0x00, 0x43, 0x47, 0x53, 0x00, 0x47, 0x4b, 0x57, 0x00, 0x47, 0x4b, 0x57, 0x00,
    0x47, 0x4b, 0x56, 0x00, 0x4a, 0x4f, 0x59, 0x00, 0x51, 0x58, 0x60, 0x00, 0x5a,
    0x5f, 0x68, 0x00, 0x61, 0x66, 0x6e, 0x00, 0x63, 0x6a, 0x70, 0x00, 0x60, 0x65,
    0x6b, 0x00, 0x57, 0x5c, 0x62, 0x00, 0x49, 0x4f, 0x57, 0x00, 0x3b, 0x42, 0x4c,
    0x00, 0x31, 0x37, 0x44, 0x00, 0x29, 0x2f, 0x3f, 0x00, 0x23, 0x29, 0x3b, 0x00,
    0x1e, 0x25, 0x38, 0x00, 0x1b, 0x23, 0x38, 0x00, 0x1d, 0x25, 0x3b, 0x00, 0x1f,
    0x27, 0x3e, 0x00, 0x26, 0x2c, 0x39, 0x00, 0x2f, 0x36, 0x42, 0x00, 0x3d, 0x44,
    0x4e, 0x00, 0x4a, 0x4e, 0x58, 0x00, 0x4c, 0x50, 0x5b, 0x00, 0x47, 0x4b, 0x56,
    0x00, 0x3a, 0x3e, 0x49, 0x00, 0x2f, 0x32, 0x3d, 0x00, 0x26, 0x28, 0x34, 0x00,
    0x21, 0x23, 0x31, 0x00, 0x25, 0x27, 0x35, 0x00, 0x2d, 0x31, 0x3f, 0x00, 0x33,
    0x37, 0x45, 0x00, 0x34, 0x39, 0x47, 0x00, 0x33, 0x39, 0x45, 0x00, 0x35, 0x3b,
    0x45, 0x00, 0x3b, 0x41, 0x4a, 0x00, 0x45, 0x4c, 0x54, 0x00, 0x4f, 0x56, 0x5d,
    0x00, 0x57, 0x5d, 0x64, 0x00, 0x5a, 0x61, 0x67, 0x00, 0x59, 0x60, 0x66, 0x00,
    0x52, 0x58, 0x5f, 0x00, 0x43, 0x4a, 0x53, 0x00, 0x36, 0x3d, 0x48, 0x00, 0x2d,
    0x33, 0x42, 0x00, 0x28, 0x2f, 0x40, 0x00, 0x22, 0x29, 0x3c, 0x00, 0x1d, 0x25,
    0x3a, 0x00, 0x1c, 0x24, 0x3a, 0x00, 0x1e, 0x25, 0x3d, 0x00, 0x20, 0x27, 0x40,
    0x00, 0x26, 0x2c, 0x3a, 0x00, 0x2e, 0x35, 0x42, 0x00, 0x3c, 0x42, 0x4d, 0x00,
    0x4a, 0x4e, 0x59, 0x00, 0x4d, 0x51, 0x5c, 0x00, 0x48, 0x4c, 0x58, 0x00, 0x3b,
    0x3e, 0x4b, 0x00, 0x30, 0x32, 0x3f, 0x00, 0x26, 0x28, 0x36, 0x00, 0x1e, 0x1f,
    0x2f, 0x00, 0x1e, 0x20, 0x30, 0x00, 0x23, 0x26, 0x36, 0x00, 0x26, 0x2b, 0x3a,
    0x00, 0x26, 0x2c, 0x3a, 0x00, 0x25, 0x2c, 0x38, 0x00, 0x29, 0x30, 0x3b, 0x00,
    0x31, 0x39, 0x43, 0x00, 0x3f, 0x46, 0x4e, 0x00, 0x49, 0x51, 0x57, 0x00, 0x51,
    0x59, 0x5e, 0x00, 0x54, 0x5c, 0x61, 0x00, 0x52, 0x5a, 0x61, 0x00, 0x49, 0x51,
    0x5a, 0x00, 0x3a, 0x42, 0x4b, 0x00, 0x2f, 0x36, 0x42, 0x00, 0x29, 0x30, 0x3f,
    0x00, 0x28, 0x2e, 0x40, 0x00, 0x22, 0x29, 0x3e, 0x00, 0x1d, 0x25, 0x3c, 0x00,
    0x1c, 0x24, 0x3c, 0x00, 0x1e, 0x26, 0x3f, 0x00, 0x21, 0x28, 0x42, 0x00, 0x25,
    0x2b, 0x39, 0x00, 0x2e, 0x34, 0x41, 0x00, 0x3b, 0x40, 0x4c, 0x00, 0x48, 0x4c,
    0x58, 0x00, 0x4c, 0x50, 0x5c, 0x00, 0x48, 0x4c, 0x58, 0x00, 0x3b, 0x3e, 0x4c,
    0x00, 0x2e, 0x31, 0x40, 0x00, 0x24, 0x27, 0x36, 0x00, 0x1b, 0x1e, 0x2e, 0x00,
    0x1a, 0x1d, 0x2e, 0x00, 0x1e, 0x21, 0x32, 0x00, 0x1f, 0x24, 0x34, 0x00, 0x1f,
    0x25, 0x35, 0x00, 0x21, 0x27, 0x35, 0x00, 0x28, 0x30, 0x3b, 0x00, 0x33, 0x3d,
    0x45, 0x00, 0x42, 0x4b, 0x52, 0x00, 0x4c, 0x55, 0x5b, 0x00, 0x52, 0x5b, 0x60,
    0x00, 0x53, 0x5c, 0x61, 0x00, 0x4c, 0x55, 0x5c, 0x00, 0x3f, 0x48, 0x52, 0x00,
    0x2f, 0x37, 0x42, 0x00, 0x27, 0x2e, 0x3c, 0x00, 0x24, 0x2b, 0x3b, 0x00, 0x25,
    0x2c, 0x3f, 0x00, 0x21, 0x29, 0x3e, 0x00, 0x1d, 0x25, 0x3d, 0x00, 0x1c, 0x23,
    0x3d, 0x00, 0x1f, 0x26, 0x41, 0x00, 0x22, 0x29, 0x45, 0x00, 0x24, 0x2a, 0x38,
    0x00, 0x2d, 0x33, 0x40, 0x00, 0x3a, 0x3f, 0x4c, 0x00, 0x46, 0x49, 0x57, 0x00,
    0x4a, 0x4d, 0x5b, 0x00, 0x47, 0x4a, 0x58, 0x00, 0x3a, 0x3d, 0x4c, 0x00, 0x2d,
    0x30, 0x3f, 0x00, 0x22, 0x25, 0x35, 0x00, 0x1a, 0x1d, 0x2d, 0x00, 0x19, 0x1c,
    0x2d, 0x00, 0x1d, 0x20, 0x31, 0x00, 0x1d, 0x22, 0x32, 0x00, 0x1e, 0x24, 0x34,
    0x00, 0x22, 0x28, 0x37, 0x00, 0x2d, 0x35, 0x3f, 0x00, 0x3c, 0x44, 0x4c, 0x00,
    0x4c, 0x55, 0x5c, 0x00, 0x54, 0x5d, 0x62, 0x00, 0x58, 0x60, 0x65, 0x00, 0x57,
    0x60, 0x65, 0x00, 0x49, 0x52, 0x5a, 0x00, 0x38, 0x3f, 0x4b, 0x00, 0x26, 0x2d,
    0x3b, 0x00, 0x20, 0x27, 0x36, 0x00, 0x1f, 0x26, 0x38, 0x00, 0x23, 0x2a, 0x3f,
    0x00, 0x20, 0x27, 0x3e, 0x00, 0x1c, 0x23, 0x3d, 0x00, 0x1c, 0x23, 0x3e, 0x00,
    0x1f, 0x26, 0x42, 0x00, 0x22, 0x29, 0x45, 0x00, 0x27, 0x2d, 0x3c, 0x00, 0x2f,
    0x35, 0x44, 0x00, 0x3b, 0x41, 0x4f, 0x00, 0x45, 0x49, 0x58, 0x00, 0x48, 0x4c,
    0x5b, 0x00, 0x45, 0x49, 0x58, 0x00, 0x39, 0x3d, 0x4c, 0x00, 0x2d, 0x30, 0x40,
    0x00, 0x21, 0x25, 0x35, 0x00, 0x17, 0x1b, 0x2b, 0x00, 0x16, 0x1a, 0x2a, 0x00,
    0x1c, 0x20, 0x30, 0x00, 0x1f, 0x25, 0x34, 0x00, 0x25, 0x2b, 0x39, 0x00, 0x2e,
    0x33, 0x41, 0x00, 0x3b, 0x41, 0x4c, 0x00, 0x49, 0x50, 0x59, 0x00, 0x55, 0x5e,
    0x65, 0x00, 0x59, 0x61, 0x67, 0x00, 0x59, 0x60, 0x67, 0x00, 0x54, 0x5d, 0x65,
    0x00, 0x3e, 0x47, 0x51, 0x00, 0x2b, 0x32, 0x40, 0x00, 0x20, 0x27, 0x38, 0x00,
    0x1b, 0x22, 0x35, 0x00, 0x1c, 0x23, 0x37, 0x00, 0x1f, 0x27, 0x3c, 0x00, 0x1e,
    0x25, 0x3d, 0x00, 0x1c, 0x23, 0x3d, 0x00, 0x1c, 0x24, 0x3f, 0x00, 0x1f, 0x27,
    0x42, 0x00, 0x21, 0x29, 0x44, 0x00, 0x2f, 0x35, 0x45, 0x00, 0x37, 0x3d, 0x4c,
    0x00, 0x42, 0x48, 0x56, 0x00, 0x49, 0x4f, 0x5d, 0x00, 0x49, 0x4f, 0x5d, 0x00,
    0x44, 0x49, 0x58, 0x00, 0x39, 0x3f, 0x4d, 0x00, 0x2e, 0x34, 0x43, 0x00, 0x24,
    0x29, 0x37, 0x00, 0x15, 0x1b, 0x28, 0x00, 0x13, 0x19, 0x25, 0x00, 0x1b, 0x21,
    0x2e, 0x00, 0x27, 0x2b, 0x38, 0x00, 0x34, 0x38, 0x44, 0x00, 0x42, 0x46, 0x52,
    0x00, 0x50, 0x54, 0x5f, 0x00, 0x58, 0x5d, 0x67, 0x00, 0x59, 0x60, 0x68, 0x00,
    0x56, 0x5b, 0x63, 0x00, 0x51, 0x56, 0x5f, 0x00, 0x49, 0x50, 0x5b, 0x00, 0x2c,
    0x33, 0x41, 0x00, 0x19, 0x20, 0x31, 0x00, 0x1b, 0x23, 0x36, 0x00, 0x1b, 0x23,
    0x39, 0x00, 0x1b, 0x23, 0x3a, 0x00, 0x1b, 0x23, 0x3a, 0x00, 0x1c, 0x23, 0x3c,
    0x00, 0x1d, 0x24, 0x3e, 0x00, 0x1c, 0x26, 0x3f, 0x00, 0x1d, 0x27, 0x40, 0x00,
    0x1e, 0x28, 0x41, 0x00, 0x37, 0x3d, 0x4d, 0x00, 0x40, 0x47, 0x56, 0x00, 0x4d,
    0x53, 0x62, 0x00, 0x55, 0x59, 0x68, 0x00, 0x54, 0x59, 0x67, 0x00, 0x4b, 0x51,
    0x5f, 0x00, 0x40, 0x44, 0x53, 0x00, 0x34, 0x39, 0x47, 0x00, 0x29, 0x2f, 0x3c,
    0x00, 0x1f, 0x24, 0x2f, 0x00, 0x1f, 0x23, 0x2e, 0x00, 0x27, 0x2c, 0x37, 0x00,
    0x32, 0x36, 0x42, 0x00, 0x3f, 0x43, 0x4f, 0x00, 0x4c, 0x50, 0x5c, 0x00, 0x56,
    0x59, 0x64, 0x00, 0x59, 0x5d, 0x66, 0x00, 0x55, 0x5b, 0x63, 0x00, 0x4c, 0x51,
    0x5a, 0x00, 0x44, 0x48, 0x52, 0x00, 0x3b, 0x40, 0x4c, 0x00, 0x26, 0x2d, 0x3c,
    0x00, 0x1a, 0x21, 0x34, 0x00, 0x1c, 0x25, 0x39, 0x00, 0x1d, 0x25, 0x3b, 0x00,
    0x1d, 0x24, 0x3c, 0x00, 0x1c, 0x23, 0x3c, 0x00, 0x1d, 0x23, 0x3d, 0x00, 0x1d,
    0x24, 0x3e, 0x00, 0x1b, 0x25, 0x3e, 0x00, 0x1b, 0x26, 0x3f, 0x00, 0x1c, 0x26,
    0x3f, 0x00, 0x3f, 0x44, 0x54, 0x00, 0x49, 0x4e, 0x5f, 0x00, 0x56, 0x5b, 0x6c,
    0x00, 0x5f, 0x62, 0x71, 0x00, 0x5d, 0x61, 0x6f, 0x00, 0x54, 0x59, 0x67, 0x00,
    0x48, 0x4b, 0x59, 0x00, 0x3a, 0x3f, 0x4c, 0x00, 0x2f, 0x35, 0x41, 0x00, 0x28,
    0x2c, 0x38, 0x00, 0x29, 0x2d, 0x38, 0x00, 0x31, 0x35, 0x40, 0x00, 0x3b, 0x3e,
    0x4a, 0x00, 0x46, 0x49, 0x55, 0x00, 0x50, 0x53, 0x5e, 0x00, 0x55, 0x59, 0x63,
    0x00, 0x55, 0x59, 0x62, 0x00, 0x4f, 0x52, 0x5b, 0x00, 0x42, 0x46, 0x50, 0x00,
    0x36, 0x3a, 0x46, 0x00, 0x2e, 0x32, 0x3d, 0x00, 0x25, 0x2a, 0x3a, 0x00, 0x20,
    0x26, 0x3a, 0x00, 0x1f, 0x26, 0x3c, 0x00, 0x1f, 0x25, 0x3d, 0x00, 0x1f, 0x25,
    0x3d, 0x00, 0x1e, 0x24, 0x3e, 0x00, 0x1e, 0x24, 0x3e, 0x00, 0x1d, 0x24, 0x3e,
    0x00, 0x1b, 0x25, 0x3e, 0x00, 0x1b, 0x25, 0x3e, 0x00, 0x1b, 0x25, 0x3e, 0x00,
    0x44, 0x47, 0x58, 0x00, 0x4d, 0x51, 0x62, 0x00, 0x5a, 0x5e, 0x6f, 0x00, 0x63,
    0x65, 0x75, 0x00, 0x61, 0x64, 0x72, 0x00, 0x58, 0x5c, 0x68, 0x00, 0x4c, 0x4e,
    0x5b, 0x00, 0x3f, 0x42, 0x4f, 0x00, 0x35, 0x39, 0x45, 0x00, 0x2c, 0x2e, 0x3a,
    0x00, 0x2b, 0x2e, 0x39, 0x00, 0x33, 0x36, 0x41, 0x00, 0x3c, 0x3e, 0x4a, 0x00,
    0x45, 0x47, 0x53, 0x00, 0x4d, 0x4f, 0x5b, 0x00, 0x50, 0x54, 0x5e, 0x00, 0x4e,
    0x52, 0x5b, 0x00, 0x47, 0x4a, 0x53, 0x00, 0x3a, 0x3c, 0x48, 0x00, 0x2d, 0x30,
    0x3c, 0x00, 0x23, 0x27, 0x33, 0x00, 0x22, 0x26, 0x37, 0x00, 0x21, 0x27, 0x3b,
    0x00, 0x20, 0x26, 0x3c, 0x00, 0x20, 0x25, 0x3d, 0x00, 0x20, 0x24, 0x3d, 0x00,
    0x1f, 0x25, 0x3d, 0x00, 0x1e, 0x24, 0x3c, 0x00, 0x1e, 0x24, 0x3c, 0x00, 0x1e,
    0x26, 0x3d, 0x00, 0x1e, 0x26, 0x3d, 0x00, 0x1e, 0x26, 0x3d, 0x00, 0x3f, 0x41,
    0x53, 0x00, 0x47, 0x49, 0x5b, 0x00, 0x51, 0x53, 0x64, 0x00, 0x57, 0x58, 0x69,
    0x00, 0x55, 0x57, 0x66, 0x00, 0x4e, 0x51, 0x5f, 0x00, 0x44, 0x46, 0x55, 0x00,
    0x3b, 0x3c, 0x4b, 0x00, 0x32, 0x34, 0x43, 0x00, 0x29, 0x29, 0x38, 0x00, 0x28,
    0x28, 0x36, 0x00, 0x2d, 0x2d, 0x3b, 0x00, 0x34, 0x34, 0x42, 0x00, 0x3b, 0x3b,
    0x49, 0x00, 0x41, 0x42, 0x4f, 0x00, 0x44, 0x45, 0x51, 0x00, 0x42, 0x43, 0x4e,
    0x00, 0x3c, 0x3d, 0x48, 0x00, 0x33, 0x33, 0x40, 0x00, 0x29, 0x2a, 0x38, 0x00,
    0x20, 0x23, 0x32, 0x00, 0x21, 0x24, 0x36, 0x00, 0x22, 0x25, 0x3a, 0x00, 0x21,
    0x25, 0x3c, 0x00, 0x21, 0x24, 0x3d, 0x00, 0x21, 0x23, 0x3d, 0x00, 0x1f, 0x24,
    0x3d, 0x00, 0x1f, 0x24, 0x3d, 0x00, 0x1f, 0x24, 0x3d, 0x00, 0x20, 0x27, 0x3e,
    0x00, 0x20, 0x27, 0x3f, 0x00, 0x20, 0x27, 0x3f, 0x00, 0x35, 0x35, 0x4d, 0x00,
    0x3a, 0x3b, 0x51, 0x00, 0x40, 0x41, 0x56, 0x00, 0x46, 0x43, 0x5a, 0x00, 0x44,
    0x42, 0x58, 0x00, 0x3e, 0x3f, 0x52, 0x00, 0x39, 0x38, 0x4b, 0x00, 0x32, 0x31,
    0x45, 0x00, 0x2b, 0x2b, 0x3f, 0x00, 0x25, 0x24, 0x36, 0x00, 0x24, 0x22, 0x34,
    0x00, 0x27, 0x25, 0x37, 0x00, 0x2a, 0x29, 0x3a, 0x00, 0x2f, 0x2e, 0x3f, 0x00,
    0x33, 0x32, 0x43, 0x00, 0x36, 0x34, 0x44, 0x00, 0x35, 0x33, 0x43, 0x00, 0x32,
    0x30, 0x40, 0x00, 0x2c, 0x2b, 0x3c, 0x00, 0x26, 0x25, 0x37, 0x00, 0x20, 0x20,
    0x33, 0x00, 0x21, 0x22, 0x37, 0x00, 0x22, 0x24, 0x3b, 0x00, 0x22, 0x24, 0x3e,
    0x00, 0x22, 0x23, 0x3f, 0x00, 0x21, 0x22, 0x3f, 0x00, 0x1f, 0x23, 0x3f, 0x00,
    0x1f, 0x23, 0x40, 0x00, 0x20, 0x25, 0x40, 0x00, 0x22, 0x27, 0x40, 0x00, 0x23,
    0x28, 0x42, 0x00, 0x23, 0x28, 0x43, 0x00, 0x2c, 0x2a, 0x46, 0x00, 0x2e, 0x2c,
    0x48, 0x00, 0x32, 0x2f, 0x4b, 0x00, 0x34, 0x30, 0x4d, 0x00, 0x33, 0x30, 0x4b,
    0x00, 0x30, 0x2e, 0x47, 0x00, 0x2c, 0x2a, 0x44, 0x00, 0x28, 0x26, 0x3e, 0x00,
    0x25, 0x23, 0x3a, 0x00, 0x24, 0x20, 0x38, 0x00, 0x24, 0x20, 0x38, 0x00, 0x24,
    0x21, 0x39, 0x00, 0x25, 0x22, 0x38, 0x00, 0x27, 0x23, 0x39, 0x00, 0x28, 0x25,
    0x3b, 0x00, 0x2a, 0x26, 0x3c, 0x00, 0x2a, 0x26, 0x3c, 0x00, 0x28, 0x25, 0x3b,
    0x00, 0x25, 0x23, 0x38, 0x00, 0x23, 0x20, 0x36, 0x00, 0x21, 0x1d, 0x35, 0x00,
    0x24, 0x20, 0x3a, 0x00, 0x25, 0x22, 0x40, 0x00, 0x23, 0x22, 0x42, 0x00, 0x22,
    0x21, 0x42, 0x00, 0x22, 0x21, 0x41, 0x00, 0x22, 0x23, 0x42, 0x00, 0x22, 0x23,
    0x42, 0x00, 0x22, 0x23, 0x42, 0x00, 0x24, 0x26, 0x44, 0x00, 0x25, 0x26, 0x46,
    0x00, 0x25, 0x25, 0x47, 0x00, 0x2b, 0x25, 0x45, 0x00, 0x2c, 0x26, 0x46, 0x00,
    0x2d, 0x27, 0x48, 0x00, 0x2e, 0x28, 0x49, 0x00, 0x2d, 0x28, 0x48, 0x00, 0x2c,
    0x27, 0x45, 0x00, 0x2a, 0x24, 0x41, 0x00, 0x27, 0x22, 0x3e, 0x00, 0x24, 0x20,
    0x3c, 0x00, 0x25, 0x1f, 0x3b, 0x00, 0x25, 0x1f, 0x3b, 0x00, 0x24, 0x1f, 0x3a,
    0x00, 0x25, 0x1f, 0x3a, 0x00, 0x26, 0x1f, 0x3a, 0x00, 0x27, 0x20, 0x3b, 0x00,
    0x27, 0x21, 0x3b, 0x00, 0x27, 0x20, 0x3b, 0x00, 0x26, 0x1f, 0x3a, 0x00, 0x26,
    0x1f, 0x39, 0x00, 0x25, 0x1f, 0x39, 0x00, 0x24, 0x1e, 0x3a, 0x00, 0x25, 0x1f,
    0x3e, 0x00, 0x26, 0x20, 0x41, 0x00, 0x24, 0x20, 0x41, 0x00, 0x23, 0x20, 0x42,
    0x00, 0x23, 0x20, 0x42, 0x00, 0x22, 0x20, 0x42, 0x00, 0x22, 0x20, 0x42, 0x00,
    0x22, 0x20, 0x42, 0x00, 0x24, 0x22, 0x43, 0x00, 0x24, 0x23, 0x45, 0x00, 0x24,
    0x23, 0x46, 0x00, 0x2c, 0x25, 0x47, 0x00, 0x2c, 0x25, 0x47, 0x00, 0x2d, 0x26,
    0x48, 0x00, 0x2e, 0x27, 0x49, 0x00, 0x2d, 0x26, 0x48, 0x00, 0x2c, 0x25, 0x46,
    0x00, 0x2a, 0x23, 0x42, 0x00, 0x28, 0x21, 0x3f, 0x00, 0x26, 0x1f, 0x3e, 0x00,
    0x25, 0x1e, 0x3d, 0x00, 0x25, 0x1e, 0x3c, 0x00, 0x25, 0x1f, 0x3b, 0x00, 0x27,
    0x1f, 0x3c, 0x00, 0x29, 0x1f, 0x3c, 0x00, 0x29, 0x20, 0x3d, 0x00, 0x29, 0x20,
    0x3d, 0x00, 0x28, 0x1f, 0x3c, 0x00, 0x27, 0x1e, 0x3b, 0x00, 0x28, 0x1f, 0x3b,
    0x00, 0x28, 0x1f, 0x3d, 0x00, 0x26, 0x1f, 0x3e, 0x00, 0x26, 0x1f, 0x3f, 0x00,
    0x26, 0x1f, 0x40, 0x00, 0x24, 0x1e, 0x40, 0x00, 0x23, 0x1f, 0x41, 0x00, 0x23,
    0x1f, 0x42, 0x00, 0x22, 0x1e, 0x41, 0x00, 0x22, 0x1e, 0x41, 0x00, 0x22, 0x1e,
    0x41, 0x00, 0x23, 0x1f, 0x42, 0x00, 0x23, 0x21, 0x43, 0x00, 0x23, 0x22, 0x44,
    0x00,
};
const int image_3_len = 4096;
