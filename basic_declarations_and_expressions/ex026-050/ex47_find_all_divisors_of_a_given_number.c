/*
 * ======================================================================
 * 47. Find all divisors of a given integer
 * ----------------------------------------------------------------------
 * Write a C program that finds all the divisors of an integer.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 29 September, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables, the values must be integers
    int i, N;

    // Read input from user
    printf("Input an integer: ");
    scanf("%d", &N);

    // Check the input
    if(N > 0) {
        printf("All the divisors of %d are:\n", N);

            // Check for divisors
            for(i = 1; i <= N; i++) {
                if(N % i == 0) {

                    int divisor = i;
                    printf("%d\n", divisor); // Show the result
            }
        }
    }

    else {
        printf("Enter a positive number.\n");
    }

    // Terminate the program successfully
    return 0;
}