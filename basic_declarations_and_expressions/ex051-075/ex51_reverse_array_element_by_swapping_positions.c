/*
 * =========================================================================
 * 51. Reverse array elements by swapping positions
 * -------------------------------------------------------------------------
 * Write a C program to read an array of length 6, change the first element 
 * by the last, the second element by the fifth and the third element by 
 * the fourth. Print the elements of the modified array.
 * -------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 11 October, 2026
 * ==========================================================================
 */

#include <stdio.h>

int main(void) {

    // Declare an array and a temporary variable. 
    // The temporary variable will store the initial value
    int num[6];
    int temp;

    // Ask the user to input 6 numbers
    printf("Input the 6 members of the array: ");

    // Read user input into correct index of the array
    for(int i = 0; i < 6; i++) {
        scanf("%d", &num[i]);
    }

    // The Important Part Is this, you can say it as the heart of this program

    // Check from index 0 to index (6 / 2)
    for(int i = 0; i < (6 / 2); i++) {

        temp = num[i];          // Store the initial value 
        num[i] = num[5 - i];    // Copy the opposite position value to num[i]
        num[5 - i] = temp;      // Copy `temp` into `num[5 -i]` to reverse the position of the value
    }

    // Show the result
    for(int i = 0; i < 6; i++) {
        printf("array_n[%d] = %d\n", i, num[i]);
    }

    // Terminate the session successfully
    return 0;
}