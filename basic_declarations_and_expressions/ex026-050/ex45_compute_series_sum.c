/*
 * ======================================================================
 * 45. Compute series sum S=1+1/2+1/3+...+1/50
 * ----------------------------------------------------------------------
 * Write a C program to calculate the value of S where
 * S = 1 + 1/2 + 1/3 + … + 1/50
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 07 September, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variable to store the sum
    float sum = 0;

    // Calculate the series sum
    for(int i = 1; i <= 50; i++) {
        
        // Don't forget to change the type of i to prevent miscalculation
        // The cast ensures the division is performed using floating-point arithmetic.
        
        sum = sum + (1 / (float)i);         
    }

    // Show the sum of the series
    printf("Value of S: %.3f", sum);

    // Terminate the program successfully
    return 0;
}