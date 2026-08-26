/*
 * ==========================================================
 * 34. Sum odd numbers between two given integers
 * ----------------------------------------------------------
 * Write a C program to compute the sum of consecutive 
 * numbers from a given pair of integers.
 * ----------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 25 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables
    int sum_odd = 0;
    int lower_bound, upper_bound;  // assign the inputs to their bounds
    int a, b;       // Store the initial inputs

    // Take two numbers from user as input
    printf("Input a pair of numbers.\n");
    printf("Input first number of the pair: ");
    scanf("%d", &a);
    printf("Input second number of the pair: ");
    scanf("%d", &b);

    // Assign the inputs to lower bound and upper bound
    if(a > b) {
        upper_bound = a;
        lower_bound = b;
    }
    else {
        upper_bound = b;
        lower_bound = a;
    }

    // Show the odd numbers between the range
    printf("List of odd numbers:\n");
    // loop will exclude the input numbers
    for(int i = lower_bound + 1; i < upper_bound; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
            sum_odd = sum_odd + i;
        }
    }

    // Show the sum of the odd numbers
    printf("Sum = %d\n", sum_odd);

    // Terminate the program successfully
    return 0;
}