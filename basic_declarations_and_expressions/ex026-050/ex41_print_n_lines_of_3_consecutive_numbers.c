/*
 * ======================================================================
 * 41. Print n lines of 3 consecutive numbers starting from 1
 * ----------------------------------------------------------------------
 * Write a C program to print 3 numbers on a line, starting with 1 and
 * printing n lines. Accept the number of lines (n, integer) from the user.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 05 September, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare the variables
    int lines, row, column;
    int count = 1;

    // Read line number from user
    printf("Input number of lines: ");
    scanf("%d", &lines);

    /* 
       The most challenging part for me - 
       Understanding the nested loop and 
       count variable idea..
     */

    // Nested loop to go through every row and column
    for(row = 1; row <= lines; row++) {
        for(column = 1; column <= 3; column++) {

            printf("%d ", count++);     // Show the result

        }
        printf("\n");                   // Print a newline
    }

    // Terminate the program successfully
    return 0;
}