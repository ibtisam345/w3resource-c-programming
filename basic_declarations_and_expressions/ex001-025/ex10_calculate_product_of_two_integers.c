/*
    10. Calculate product of two integers

    Write a C program that accepts two integers from the user and
    calculates the product of the two integers.
*/

/*
* @author: Muhammad Ibtisam Adnan
* @date: 5 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int first_integer, second_integer, product;

    // Read inut
    printf("Input the first integer: ");
    scanf("%d", &first_integer);
    printf("Input the second integer: ");
    scanf("%d", &second_integer);

    // Peform arithmetic operations
    product = first_integer * second_integer;

    // Display the result
    printf("Product of the above two integers = %d", product);

    return 0;
}