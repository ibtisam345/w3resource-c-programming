/*
 * ==============================================================
 * 32. Print numbers between 1 and 100 with a specific remainder
 * --------------------------------------------------------------
 * Write a C program to print all numbers between 1 and 100
 * which are divided by a specified number and the remainder
 * will be 3.
 * ----------------------------------------------------------
 * Author: Muhammmad Ibtisam Adnan
 * Date  : 25 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variable to store the input
    int n, i; // Also declare a counter

    // Take input from user
    printf("Input an integer: ");
    scanf("%d", &n);

    // Check for the numbers with a loop
    for(i = 1; i <= 100; i++) {
        if(i % n == 3) {
            printf("%d\n", i);  // Show the result
        }
    }

    // Terminate the program successfully
    return 0;
}