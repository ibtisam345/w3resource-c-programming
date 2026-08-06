/*
*   13. Find the maximum of three integers: 
*   Write a C program that accepts three integers and finds the maximum of three.
*
*   @author: Muhammad Ibtisam Adnan
*   @date: 06 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int a, b, c;
    int largest; // the largest value will be stored here

    // Read input from user
    printf("Input the first integer: ");
    scanf("%d", &a);
    printf("Input the second integer: ");
    scanf("%d", &b);
    printf("Input the third integer: ");
    scanf("%d", &c);

    // Implement condition to check the largest

    /* 
        >= also handles cases where the largest values are equal.
    */
    
    if(a >= b && a >= c) {
        largest = a;
    }

    else if(b >= a && b >= c) {
        largest = b;
    }

    else if(c >= a && c >= b) {
        largest = c;
    }

    // Show the result
    printf("Maximum value of three integers: %d\n", largest);

    // End the program successfully
    return 0;
}