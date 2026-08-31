/*
 * ======================================================================
 * 40. Find integers divisible by 7 with a remainder of 2 or 3
 * ----------------------------------------------------------------------
 * Write a C program that finds all integer numbers that divide by 7 and
 * have a remainder of 2 or 3 between two given integers
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 31 August, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables
    int a, b;
    int first_integer, second_integer;

    // Read input from user
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);

    // Determine which input is smaller and which is larger
    if(a < b) {
        first_integer = a;
        second_integer = b;
    }
    else {
        first_integer = b;
        second_integer = a;
    }

    // Check the conditions according to the problem
    for(int i = first_integer; i < second_integer; i++) {

        // Check the remainder 
        if(i % 7 == 2 || i % 7 == 3) {

            // Show the result
            printf("%d\n", i); 

        }
    }

    // Terminate the program successfully
    return 0;
}