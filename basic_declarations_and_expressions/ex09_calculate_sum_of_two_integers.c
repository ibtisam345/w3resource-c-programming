/*
    9. Calculate sum of two integers

    Write a C program that accepts two integers from the user and calculates the sum of the two integers.
*/

#include <stdio.h>

int main() {

    // Declare variable
    int first_integer, second_integer, sum;

    // Read input
    printf("Input the first integer: ");
    scanf("%d", &first_integer);
    printf("Input the second integer: ");
    scanf("%d", &second_integer);

    // Perform arithmetics operations
    sum = first_integer + second_integer;
    printf("Sum of the above two integers = %d", sum);

    return 0;
}