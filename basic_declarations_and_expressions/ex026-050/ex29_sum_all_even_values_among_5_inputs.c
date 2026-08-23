/*
 * ================================================
 * 29. Sum all odd values among 5 inputs
 * ------------------------------------------------
 * Write a C program that read 5 numbers and sum
 * of all odd values between them.
 * ------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 23 August, 2026
 * ================================================
 */

// I will solve this problem using an alternative approach in the future.

#include <stdio.h>

int main(void) {

    // Declare variables
    int a, b, c, d, e;
    int odd_sum = 0;

    // Read input from user
    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
    printf("Input the third number: ");
    scanf("%d", &c);
    printf("Input the fourth number: ");
    scanf("%d", &d);
    printf("Input the fifth number: ");
    scanf("%d", &e);

    // Check odd condition and add them up
    if(a % 2 != 0) {
        odd_sum = odd_sum + a;
    }
    if(b % 2 != 0) {
        odd_sum = odd_sum + b;
    }
    if(c % 2 != 0) {
        odd_sum = odd_sum + c;
    }
    if(d % 2 != 0) {
        odd_sum = odd_sum + d;
    }
    if(e % 2 != 0) {
        odd_sum = odd_sum + e;
    }

    // Show the sum of all odd numbers
    printf("Sum of all odd numbers: %d\n", odd_sum);

    // Terminate the program
    return 0;
}   