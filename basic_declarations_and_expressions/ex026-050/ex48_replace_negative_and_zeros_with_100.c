/*
 * =========================================================================
 * 48. Replace negatives and zeros in an array with 100, then print
 * -------------------------------------------------------------------------
 * Write a C program that reads and prints the elements of an array of
 * length 7. Before printing, replace every negative number, zero, with 100.
 * -------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 10 October, 2026
 * ==========================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare an array to store the inputs
    int num[7];

    // Ask user to input numbers
    printf("Input the 7 members of the array: ");

    // Take input from user and assign to the correct index of array
    for(int i = 0; i <= 6; i++) {

        scanf("%d", &num[i]);

        // Check the condition: 0 or negative
        // If yes, assign 100 to it
        if(num[i] <= 0) {
            num[i] = 100;
        }
    }

    // Show the result, the modified array...
    printf("Array values are:\n ");
    for(int i = 0; i < 7; i++) {  
        // i <= 6 also applicable, but this one matches the array size
        printf("n[%d] = %d\n", i, num[i]);
    }

    // Terminate the program successfully
    return 0;
}