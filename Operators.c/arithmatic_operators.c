// Operators are special symbols that are used to perform some specific mathematical or logical operations. Operators are also known as C Tokens, these are very useful in programming even real life, and without operators, no one can do programming.

// Classification of Operators:

// Assignment Operator
// Arithmetic operators
// Relational Operators
// Logical Operators
// Increments and Decrement Operators
// Conditional Operators
// Bitwise Operators




// Arithmetic operators

// The operators used to perform arithmetic operations are called Arithmetic Operators.

// +       Addition            To add two operands
// -       Subtraction         To subtract two operands
// *       Multiplication      To multiply two operands
// /       Divide              To divide two operands (returns quotient)
// %       Modulus             To get remainder
// Consider the examplem

#include <stdio.h>

int main()
{

    int num1, num2;
    int result;
    float result1;

    num1 = 10;
    num2 = 3;

    result = num1 + num2;
    printf("\nAddition of %d and %d is = %d", num1, num2, result);

    result = num1 - num2;
    printf("\nSubtraction of %d and %d is = %d", num1, num2, result);

    result = num1 * num2;
    printf("\nMultiplication of %d and %d is = %d", num1, num2, result);

    result1 = (float)num1 / (float)num2;
    printf("\nQuotient dividing %d by %d is  = %f", num1, num2, result1);

    result = num1 % num2;
    printf("\nRemainder dividing %d by %d is  = %d", num1, num2, result);

    return 0;
}