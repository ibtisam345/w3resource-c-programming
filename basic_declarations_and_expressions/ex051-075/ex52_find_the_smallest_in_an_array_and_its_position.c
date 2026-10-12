/*
 * =========================================================================
 * 52. Find the smallest element in an array and its position
 * -------------------------------------------------------------------------
 * Write a C program to read an array of length 6 and find the smallest 
 * element and its position.
 * -------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 12 October, 2026
 * ==========================================================================
 */

    /*
        Because of the inconsistency between the statement and sample data, 
        I followed the statement. 
    */
#include <stdio.h>

int main(void) {

    // Declare an array to store the elements
    int arr[6];
    // These variables are needed to store the smallest value and the position of the value
    int smallest, position;     

    printf("Input the array elements: ");
    
    // Read user input
    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the variables
    smallest = arr[0];
    position = 0;

    // Check for the smallest value and its position
    for(int i = 1; i < 6; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            position = i;
        }
    }

    // Show the result 
    printf("Smallest Value: %d\n", smallest);
    printf("Position of the element: %d\n", position);

    // Terminate the session successfully
    return 0;
}