/*
*   28. Count positives and calculate their average from 5 inputs
*
*   Write a C program that reads 5 numbers, counts the number of positive numbers, 
    and prints out the average of all positive values.
*   @author: Muhammad Ibtisam Adnan
*   @date  : 18 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables 
    int a, b, c, d, e;      // Store inputs
    int positive_count = 0;  // Store positive count 
    int positive_sum = 0; 
    float average;

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

    // Check conditions of being positive and perform operations
    if(a > 0) {
        positive_count = positive_count + 1;
        positive_sum = positive_sum + a;
    }
    if(b > 0) {
        positive_count = positive_count + 1;
        positive_sum = positive_sum + b;
    }
    if(c > 0) {
        positive_count = positive_count + 1;
        positive_sum = positive_sum + c;
    }
    if(d > 0) {
        positive_count = positive_count + 1;
        positive_sum = positive_sum + d;
    }
    if(e > 0) {
        positive_count = positive_count + 1;
        positive_sum = positive_sum + e;
    }

    // Calculate the average and Show the result
    if(positive_count != 0) {
        average = ((float)positive_sum / positive_count);
        printf("Number of positive numbers: %d\n", positive_count);
        printf("Average value of the said positive numbers: %.2f\n", average);
    }
    else {
        printf("No positive integer detected!");
    }

    // Terminate the program
    return 0;
}