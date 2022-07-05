Version Schematic: A.B.C.D
A: Model
	1: Mnist
	2: SVHN

B: Type of Optimization
	0: Constant 
	1: Loop Unroll
	2: CFU
	3: CFU with 12 weights stored(first 3 columns of a row)
	4: CFU with 12 weights stored and 12 pipelined input vals
	5: CFU with 36 weights stored and 36 pipelined input vals 
	6: CFU with 36 weights stored with input buffer

C: For Loop Order
	0: As given in website
	1: Order to store filter weights in CFU
	2: Order to store all inputs
	3: Order to store all inputs version 2
	4: 8x unroll

D: Output Buffer
	0: No output buffer
	1: Output Buffer is there
	2: Added zero layer to input image
	




Versions:
1.1.0  : Mnist | loop unrolled | Loop Order as given in Website
1.2.0.0: Mnist | CFU | Loop Order as given in Website | no output buffer
1.1.1.0: Mnist | loop unrolled | Loop Order to store filter_vals in CFU | no output buffer
1.2.1.0: Mnist | CFU | Loop Order to store filter_vals in CFU | no output buffer
