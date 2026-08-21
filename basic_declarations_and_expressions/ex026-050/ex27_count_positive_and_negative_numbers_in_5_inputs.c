/*
*   27. Count positive and negative numbers in 5 inputs
*
*   Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 14 August, 2026
*/

#include <stdio.h>

int main(void) {

    // Declare variables
    int a, b, c, d, e;
    int positive_count = 0, negative_count = 0;

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

    // Check condition and increment the count
    if(a > 0) {
        positive_count = positive_count + 1;
    }
    else if(a < 0){
        negative_count = negative_count + 1;
    }

    if(b > 0) {
        positive_count = positive_count + 1;
    }
    else if(b < 0) {
        negative_count = negative_count + 1;
    }

    if(c > 0) {
        positive_count = positive_count + 1;
    }
    else if(c < 0) {
        negative_count = negative_count + 1;
    }

    if(d > 0) {
        positive_count = positive_count + 1;
    }
    else if(d < 0) {
        negative_count = negative_count + 1;
    }

    if(e > 0) {
        positive_count = positive_count + 1;
    }
    else if(e < 0) {
        negative_count = negative_count + 1;
    }
    
    // Show number of positive numbers and negative numbers
    printf("Number of positive numbers: %d\n", positive_count);
    printf("Number of negative numbers: %d\n", negative_count);

    // Terminate the program by returning 0
    return 0;
}