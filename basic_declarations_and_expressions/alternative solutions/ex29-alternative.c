/*
 * ================================================
 * 29. Sum all odd values among 5 inputs
 * ------------------------------------------------
 * Write a C program that read 5 numbers and sum
 * of all odd values between them.
 * ------------------------------------------------
 * @author: Muhammad Ibtisam Adnan
 * @date  : 24 August, 2026
 * ================================================
 */

#include <stdio.h>

int main(void) {
    
    // Declare variables 
    int numbers[5];
    int odd_sum = 0;

    printf("Enter 5 numbers: ");

    // Read input from user
    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);

        if(numbers[i] % 2 != 0) {
            odd_sum = odd_sum + numbers[i];
        }
    }

    // Show the result
    printf("Sum of all odd numbers: %d\n", odd_sum);

    // terminate the program
    return 0;
}