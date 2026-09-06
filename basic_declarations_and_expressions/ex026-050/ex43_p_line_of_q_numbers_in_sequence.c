/*
 * ======================================================================
 * 43. Print p lines of q numbers in sequence starting from 1
 * ----------------------------------------------------------------------
 * Write a C program that reads two integers p and q, prints p number of
 * lines in a sequence of 1 to b in a line.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 06 September, 2026
 * ======================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variable to store input
    int p, q;

    // Declare a counter to display the sequence of numbers
    int counter = 1;

    // Read input from user
    printf("Input number of lines: ");
    scanf("%d", &p);
    printf("Number of characters in a line: ");
    scanf("%d", &q);

    // Use nested loop to go through p line and q numbers in 1 line
    for(int i = 1; i <= p; i++) {
        for(int j = 1; j <= q; j++) {
            printf("%d ", counter++);   // Show the result
        }
        printf("\n");                   // Print a newline as expected
    }

    // Terminate the program successfully
    return 0;
}