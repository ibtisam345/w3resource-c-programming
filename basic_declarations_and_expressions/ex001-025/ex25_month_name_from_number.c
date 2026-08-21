/*
*   25. Get month name from number (1–12)
*
*   Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
* 
*   @author: Muhammad Ibtisam Adnan
*   @date: 12 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variable
    int month_number;

    // Read input from user
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &month_number);

    // Show the month name based on the input number
    if(month_number == 1) {
        printf("January\n");
    }
    if(month_number == 2) {
        printf("February\n");
    }
    if(month_number == 3) {
        printf("March\n");
    }
    if(month_number == 4) {
        printf("April\n");
    }
    if(month_number == 5) {
        printf("May\n");
    }
    if(month_number == 6) {
        printf("June\n");
    }
    if(month_number == 7) {
        printf("July\n");
    }
    if(month_number == 8) {
        printf("August\n");
    }
    if(month_number == 9) {
        printf("September\n");
    }
    if(month_number == 10) {
        printf("October\n");
    }
    if(month_number == 11) {
        printf("November\n");
    }
    if(month_number == 12) {
        printf("December\n");
    }

    // Terminate the program
    return 0;

}