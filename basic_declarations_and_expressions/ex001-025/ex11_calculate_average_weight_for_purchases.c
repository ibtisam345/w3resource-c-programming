/*
*   11. Calculate average weight for purchases
*   
*   Write a C program that accepts two item's weight and number of purchases
*   (floating point values) and calculates their average value.
*
*   @author: Muhammad Ibtisam Adnan
*   @date: 5 August, 2026
*
*   Require input validation, denominator 0 to fix later when I learn conditional
*/

#include <stdio.h>

int main() {
    // Declare variable
    float weight_item_1, weight_item_2, average; 
    int no_item_1, no_item_2;
    
    // Read input for item 1
    printf("Weight - Item 1: ");
    scanf("%f", &weight_item_1);

    printf("No. of Item 1: ");
    scanf("%d", &no_item_1);

    // Read input for item 2
    printf("Weight - Item 2: ");
    scanf("%f", &weight_item_2);

    printf("No. of Item 2: ");
    scanf("%d", &no_item_2);

    // Calculate average 
    average = ((weight_item_1 * no_item_1) + (weight_item_2 * no_item_2)) / (no_item_1 + no_item_2);

    /* Display the result
       %.2f displays two digits after the decimal point.
    */
    printf("Average value = %.2f\n", average);

    return 0;
}