/*
    8. Convert days to years, weeks, and days

    Write a C program to convert specified days into years, weeks and days.
    Note: Ignore leap year.
*/

/*
* @author: Muhammad Ibtisam Adnan
* @date: 5 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int total_days, years, remaining_days, weeks, days;

    // Read input 
    printf("Number of days: ");
    scanf("%d", &total_days);

    // Perform division and remainder operations
    years = total_days / 365;
    remaining_days = total_days % 365;
    weeks = remaining_days / 7;
    days = remaining_days % 7;

    // Display the result
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);
    
    // Program ran successfully
    return 0; 
}
