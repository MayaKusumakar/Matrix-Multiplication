# Matrix-Multiplication
Please use the code in [StarterCode.zip](https://github.com/MayaKusumakar/Matrix-Multiplication/files/13506461/StarterCode.1.zip)
 as your starting point for this assignment.

## Problem
Write a program that multiplies two matrices together and then displays the results. If you don’t know how to do matrix multiplication I recommend looking over this explanation to see how it is done. You can use this online calculator to help you check your results and see if they are correct.

To help you practice more with problem decomposition, you will NOT be coming up with your solution from scratch. Instead, you must implement the methods that you find in the starter code, which is at the END of the prompt. Each function will tell you what code you need to write.

This code will be called from main.c, which has been provided in the starter code. Look at it to see how all the functions are connected together. You can NOT modify main.c.

You must also write a makefile that will compile together main.c, mat_multiply.c, and mat_multiply.h into an executable named mat_multiply.out.

## Specifications
You MUST dynamically allocate the space for your matrices
Any solutions that contain statically allocated arrays will be given zeros
The values in the matrices will always be integers
There is no maximum size for the matrices input
The matrices will not always be square (have the same number of rows and columns)
The matrices will be entered one line at a time
## Assumptions
Input will always be valid.

## Valid Input
The user will enter input in the following order

The number of rows in the matrices
The number of columns in the matrices
The values of matrix A
The values of matrix B
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
