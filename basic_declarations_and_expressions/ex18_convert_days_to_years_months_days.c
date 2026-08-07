/*
*   18. Convert days to years, months, days
*
*   Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
*   @author: Muhammad Ibtisam Adnan
*   @date  : 07 August, 2026
*/ 

#include <stdio.h>

int main() {

    // Declare variables
    int input_days;
    int remainder_days; // Store remaining days temporarily
    int years, months, days;

    // Read input from user
    printf("Input number of days: ");
    scanf("%d", &input_days);

    // Convert total days into years, months and remaining days
    years = input_days / 365;
    remainder_days = input_days % 365;

    months = remainder_days / 30;

    days = remainder_days % 30;

    // Show the result
    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);

    // Terminate the program successfully
    return 0;
}