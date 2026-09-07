/*
 * ======================================================================
 * 44. Calculate the average of student math marks until termination
 * ----------------------------------------------------------------------
 * Write a C program to calculate the average mathematics marks of some
 * students. Input 0 (excluding to calculate the average) or a negative
 * value to terminate the input process.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 07 September, 2026
 * ======================================================================
 */

#include <stdio.h>
#include <stdbool.h>    // To use "true"

int main(void) {

    // Declare variables to store and initialize 
    int input_count = 0, temp; 
    int sum = 0;
    float average;

    // Read marks from user
    printf("Input Mathematics marks (0 to terminate): ");

    while(true) {

        // Read one mark into the temporary variable
        scanf("%d", &temp);

        if(temp > 0) {
            sum = sum + temp;                           // sum += temp
            input_count = input_count + 1;              // input_count++
        }

        else 
            break;      // Terminate the loop when input is 0 or a negative number
    }

    // Calculate average and show it
    // Prevent division by 0 
    if(input_count != 0) {
        average = (float)sum / input_count;

        printf("Average marks in Mathematics: %.2f\n", average);
    }

    else {
        printf("No input detected.\n");
    }

    // Terminate the program successfully   
    return 0;
}