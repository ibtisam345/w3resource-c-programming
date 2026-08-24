/*
 * ==========================================================
 * 31. Check if an integer is positive/negative and even/odd
 * ----------------------------------------------------------
 * Write a C program to check whether a given integer is
 * positive even, negative even, positive odd or negative
 * odd. Print even if the number is 0.
 * ----------------------------------------------------------
 * Author: Muhammmad Ibtisam Adnan
 * Date  : 24 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables
    int number;

    // Read input from user
    printf("Input an integer: ");
    scanf("%d", &number);

    // Check condition and print the result
    if(number == 0) {
        printf("Even\n");
    }
    else if(number > 0 && number % 2 == 0) {
        printf("Positive even\n");
    }
    else if(number > 0 && number % 2 != 0) {
        printf("Positive odd\n");
    }
    else if(number < 0 && number % 2 == 0) {
        printf("Negative even\n");
    }
    else if(number < 0 && number % 2 != 0) {
        printf("Negative odd\n");
    }

    // Terminate the program
    return 0;
} 