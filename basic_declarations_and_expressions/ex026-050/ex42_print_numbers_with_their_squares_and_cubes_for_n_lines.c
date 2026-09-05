/*
 * ======================================================================
 * 42. Print numbers with their squares and cubes for n lines
 * ----------------------------------------------------------------------
 * Write a C program to print a number, its square and cube, starting
 * with 1 and printing n lines. Accept the number of lines (n, integer)
 * from the user.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 05 September, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variable to store the lines
    int lines;

    // Read number of lines from user
    printf("Input number of lines: ");
    scanf("%d", &lines);

    // Input validation check
    if(lines <= 0) {
        printf("Not valid. Please enter a positive integer.\n");
    }

    else {
        // Loop through each number
        for(int i = 1; i <= lines; i++) {

            // Show the result
            printf("%d %d %d\n", i, i*i, i*i*i);
        }
    }

    // Terminate the program successfully
    return 0;
}