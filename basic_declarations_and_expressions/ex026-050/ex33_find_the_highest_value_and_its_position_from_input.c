/*
 * ==========================================================
 * 33. Find the highest value and its position from inputs
 * ----------------------------------------------------------
 * Write a C program that accepts some integers from the 
 * user and finds the highest value and the input position.
 * ----------------------------------------------------------
 * Author: Muhammmad Ibtisam Adnan
 * Date  : 25 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {
    
    // Declare variables
    int numbers[5];
    int highest; 
    int position;

    // Take input from user
    printf("Enter five integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize the highest value
    highest = numbers[0];
    position = 1;

    // Loop through the array and find the highest number
    for(int i = 1; i < 5; i++) {
        if(numbers[i] > highest) {
            highest = numbers[i];
            position = i + 1;
        }
    }
    
    // Show the highest value and its position
    printf("Highest value: %d\n", highest);
    printf("Position: %d\n", position);

    // Terminate the program
    return 0;
}