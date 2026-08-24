/*
 * ==========================================================
 * 31. Check if an integer is positive/negative and even/odd
 * (Alternative solution)
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

    // Read an integer from user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check conditions and print the result
    if(number == 0) {
        printf("Even\n");
    }

    else if(number > 0) {
        printf("Positive ");
        
        if(number % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    } 

    else if(number < 0) {
        printf("Negative ");

        if(number % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }

    // Terminate the program successfully
    return 0;
}