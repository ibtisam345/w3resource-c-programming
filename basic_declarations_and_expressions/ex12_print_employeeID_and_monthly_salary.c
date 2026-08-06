/*
*   12. Print employee ID and monthly salary
*
*   Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
*   Print the ID and salary (with two decimal places) of the employee for a particular month.
*   @author: Muhammad Ibtisam Adnan
*   @date: 6 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare necessary variables
    char employee_id[11]; // variable to store employee ID (upto 10 characters)
    int working_hour; 
    double salary_amount_per_hour, salary; 

    // Prompt user for employee ID
    printf("Input the Employee ID(Max. 10 chars): ");
    scanf("%s", &employee_id);

    // Read working hours from user
    printf("Input the working hours: ");
    scanf("%d", &working_hour);

    // Ask salary amount per hour from user
    printf("Salary amount/hour: ");
    scanf("%lf", &salary_amount_per_hour);

    // Calculate salary
    salary = working_hour * salary_amount_per_hour;

    // Show the results
    printf("Employee ID = %s\n", employee_id);
    printf("Salary = US$ %.2lf\n", salary);

    return 0;
}