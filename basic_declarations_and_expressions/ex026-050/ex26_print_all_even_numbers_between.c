/*
*   26. Print all even numbers between 1 and 50
*
*   Write a C program that prints all even numbers between 1 and 50 (inclusive).
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 13 August, 2024
*/

#include <stdio.h>

int main() {

    // Declare a counter variable
    int i;

    // Show the initial message
    printf("Even numbers between 1 to 50 (inclusive): \n");

    // Check even condition
    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d ", i); // If "i" is even, print it.
        }
    }

    // Terminate the program   
    return 0;
}