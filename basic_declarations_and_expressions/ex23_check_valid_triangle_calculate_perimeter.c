/*
*   23. Check for valid triangle and calculate perimeter
*
*   Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them.
*   Determine the perimeter of the triangle if the given values are valid.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 08 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    float a, b, c;
    float perimeter;

    // Read input from user
    printf("Input the first number: ");
    scanf("%f", &a);
    printf("Input the second number: ");
    scanf("%f", &b);
    printf("Input the third number: ");
    scanf("%f", &c);

    // Check valid triangle condition
    if(((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a)) {
        printf("Making a triangle is not possible.\n");
    }

    else {

        printf("Making a triangle is possible.\n");
        perimeter = a + b + c;

        printf("Perimeter = %.2f", perimeter);
    }

    // End the program
    return 0;
}