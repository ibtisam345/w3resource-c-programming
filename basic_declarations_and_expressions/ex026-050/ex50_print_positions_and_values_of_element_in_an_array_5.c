/*
 * =========================================================================
 * 50. Print positions and values of elements in an array < 5
 * -------------------------------------------------------------------------
 * Write a C program to read an array of length 5 and print the position 
 * and value of the array elements of value less than 5.
 * -------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 11 October, 2026
 * ==========================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare an array to store the inputs
    int number[5];

    // Ask the user to input 5 numbers
    printf("Input the 5 members of the array: ");

    // Assign the numbers to the correct index of the array
    for(int i = 0; i < 5; i++) {

        // i <= 4 also acceptable....
        scanf("%d", &number[i]);
    }

    // Show a message for the result
    printf("The position and value of the elements <5 are:\n");

    // Check each element value that satisfies the codition
    for(int i = 0; i < 5; i++) {
        if(number[i] < 5) {

            // Show the position and value of the satisfied elements
            // Convert the "value" to a floating point number as in the problem
            printf("A[%d] = %.1f\n", i, (float)number[i]);
        }
    }

    // Terminate the program successfully
    return 0;    
}