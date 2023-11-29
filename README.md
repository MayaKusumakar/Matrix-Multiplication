# Matrix-Multiplication
See the files in [StarterCode.zip](https://github.com/MayaKusumakar/Matrix-Multiplication/files/13506461/StarterCode.1.zip) for the main.c file, and starter files given.

## Problem
This program multiplies two matrices together and then displays the results. 

To help you practice more with problem decomposition, I did NOT come up with your solution from scratch. Instead, I implemented the methods found in the starter code 

Each function told me what code I needed to write.

This code will be called from main.c, which has been provided in the starter code. Look at it to see how all the functions are connected together. I was NOT able to modify main.c.

I also wrote a makefile that will compile together main.c, mat_multiply.c, and mat_multiply.h into an executable named mat_multiply.out.

## Specifications
 - MUST dynamically allocate the space for your matrices
  - Any solutions that contain statically allocated arrays will be given zeros
 - The values in the matrices will always be integers
 - There is no maximum size for the matrices input
 - The matrices will not always be square (have the same number of rows and columns)
 - The matrices will be entered one line at a time

## Assumptions
Input will always be valid.

## Valid Input
The user will enter input in the following order:

1. The number of rows in the matrices
2. The number of columns in the matrices
3. The values of matrix A
4. The values of matrix B

## Restrictions
No global variables may be used

# Examples
## Example 1
Enter the dimensions of matrix A: 2 2

Enter Matrix A

1 2

3 4

Enter the dimensions of matrix B: 2 2

Enter Matrix B

10 20

30 40

A * B =

70 100

150 220

## Example 2
Enter the dimensions of matrix A: 3 4

Enter Matrix A

2 5 7 9

3 8 5 17

2 3 1 -3

Enter the dimensions of matrix B: 4 1

Enter Matrix B

1 2 3 4

A * B =

69

102

-1
