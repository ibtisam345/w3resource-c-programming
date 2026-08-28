/*
 * ======================================================================
 * 39. Sum all numbers between two integers, excluding multiples of 17
 * ----------------------------------------------------------------------
 * Write a C program to calculate the sum of all numbers not divisible
 * by 17 between two given integer numbers.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 27 August, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables
    int i, a, b;
    int first_integer, second_integer;
    long sum = 0;

    // Take input from user
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    // Check if both numbers are different
    if(a != b) {

        // Assign the smaller value to first integer and larger value to second integer
        if(a > b) {
            first_integer = b;
            second_integer = a;
        }
        else {
            first_integer = a;
            second_integer = b;
        }

        // Sum the numbers
        for(i = first_integer; i <= second_integer; i++) {
            if(i % 17 != 0) {
                sum = sum + i;
            }
        }

        // Show the result
        printf("Sum: %ld\n", sum);
    }
    else {
        printf("Both numbers are same\n"); // No number exists to do sum
    }

    // Terminate the program 
    return 0;
}