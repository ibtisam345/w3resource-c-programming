/*
* ===========================================================
* 30. Print squares of all even numbers up to a given value 
* -----------------------------------------------------------
* Write a C program to find and print the square of all the 
* even values from 1 to a specified value.
* -----------------------------------------------------------
* Author: Muhammad Ibtisam Adnan
* Date  : 24 August, 2026
* ===========================================================
*/

#include <stdio.h>

int main(void) {

    // Declare variables
    int n;

    // Read input from user
    printf("List of square of each one of the even values from 1 to: ");
    scanf("%d", &n);

    // Check for evens and show their squares
    for(int i = 2; i <= n; i += 2) {
        printf("%d^2 = %d\n", i, i * i);
    }

    // Terminate the program
    return 0;
}