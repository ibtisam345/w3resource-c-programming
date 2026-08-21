/*
*   22. Sum all odd numbers among five inputs
*
*   Write a C program that reads 5 numbers and sums all odd values between them.
*
*   ChatGPT helped me solving this exercise.
*   I can use so many "if" and each will independently be checked.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 08 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int a, b, c, d, e;
    int sum_odd = 0;

    // Read input from user
    printf("Input the first number: ");
    scanf("%d", &a);
    printf("Input the second number: ");
    scanf("%d", &b);
    printf("Input the third number: ");
    scanf("%d", &c);
    printf("Input the fourth number: ");
    scanf("%d", &d);
    printf("Input the fifth number: ");
    scanf("%d", &e);

    // Check odd condition
    if(a % 2 != 0) {
        sum_odd = sum_odd + a;
    }
    if(b % 2 != 0) {
        sum_odd = sum_odd + b;
    }
    if(c % 2 != 0) {
        sum_odd = sum_odd + c;
    }
    if(d % 2 != 0) {
        sum_odd = sum_odd + d;
    }
    if(e % 2 != 0) {
        sum_odd = sum_odd + e;
    }

    // Show the result
    printf("Sum of all odd values: %d", sum_odd);

    // terminate the program
    return 0;
}