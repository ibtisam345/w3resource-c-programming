/*
 * ================================================================
 * 35. Check if a pair of numbers is in ascending/descending order
 * ----------------------------------------------------------------
 * Write a C program to check if two numbers in a pair are in
 * ascending order or descending order.
 * ----------------------------------------------------------
 * Author: Muhammmad Ibtisam Adnan
 * Date  : 26 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables
    int first_number, second_number;

    // Read two integers from user
    printf("Input a pair of numbers.\n");
    printf("Input first number of the pair: ");
    scanf("%d", &first_number);
    printf("Input second number of the pair: ");
    scanf("%d", &second_number);

    // Check which number is larger
    // Show the result
    if(first_number == second_number) {
        printf("The numbers are equal!\n"); // Handle eqaual numbers
    }
    else if(first_number > second_number) {
        printf("The pair is in descending order!\n");
    }
    else {
        printf("The pair is in ascending order!\n");
    }

    // Terminate the program successfully
    return 0;
}