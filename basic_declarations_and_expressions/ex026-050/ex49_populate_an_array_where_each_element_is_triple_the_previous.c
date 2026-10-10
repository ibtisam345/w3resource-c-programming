/*
 * =========================================================================
 * 49. Populate an array where each element is triple the previous
 * -------------------------------------------------------------------------
 * Write a C program to read and print the elements of an array with length
 * 7. Before printing, insert the triple of the previous position, starting
 * from the second position.
 * For example, if the first number is 2, the array numbers must be 2, 6, 
 * 18, 54 and 162
 * -------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 10 October, 2026
 * ==========================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare an array 
    int triples[7];

    // Read the first number of the array from the user
    printf("Input the first number of the array: ");
    scanf("%d", &triples[0]);

    // Calculate the value of each index by multiplying the previous index value by 3
    for(int i = 0; i < 6; i++) {
        triples[i + 1] = 3 * triples[i];
    }

    // Show the result
    printf("Array values are: ");

    // Print every index and newline for each loop execution
    for(int i = 0; i < 7; i++) {
        printf("n[%d] = %d\n", i, triples[i]);
    }

    // Terminate the session successfully
    return 0;
} 