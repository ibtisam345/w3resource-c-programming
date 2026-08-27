/*
 * ============================================================
 * 38. Divide two numbers or print if division isn't possible
 * ------------------------------------------------------------
 * Write a program that reads two numbers and divides the 
 * first number by the second number. If division is not
 * possible print "Division is not possible
 * --------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 27 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables
    int first_number, second_number;
    float division;

    // Read input from user
    printf("Input two numbers:\n");
    printf("x: ");
    scanf("%d", &first_number);
    printf("y: ");
    scanf("%d", &second_number);

    // Divide the first number with the second number
    if(second_number != 0) {
        division = (float)first_number / second_number;
        printf("%.2f\n", division);
    }
    // If the second number is zero print that division is not possible
    else {
        printf("Division is not possible\n");
    }

    // Terminate the session
    return 0;
}