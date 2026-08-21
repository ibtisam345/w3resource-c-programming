/*
*   17. Convert seconds into hours, minutes, seconds
*
*   Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
*   @author: Muhammad Ibtisam Adnan
*   @date  : 07 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int input_seconds; // variable for input
    int temp_remainder; // variable to store remainder temporarily
    int hours, minutes, seconds; // variables for output

    // Read input from user
    printf("Input seconds: ");
    scanf("%d", &input_seconds);

    // Perform division and remainder operation
    hours = input_seconds / 3600;           // Get the hour(s)
    temp_remainder = input_seconds % 3600;  // Store the remaining seconds after removing the hours.

    minutes = temp_remainder / 60;     // Get the minute(s)

    seconds = temp_remainder % 60;     // Get the remaining seconds after removing the complete minutes.
    
    // Show the result
    printf("H:M:S - %d:%d:%d", hours, minutes, seconds);

    // Terminate the program successfully
    return 0;
}