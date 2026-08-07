/*
*   Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 02 August, 2026
*/
#include <stdio.h>

int main() {
    int height, width, area, perimeter;

    height = 7; //inch
    width = 5; //inch

    // Formula of perimeter
    perimeter = 2 * (height + width); 

    // Formula of area of a rectangle
    area = height * width;

    printf("Perimeter of the rectangle = %d inches\n", perimeter);
    printf("Area of the rectangle = %d square inches\n", area);

    return 0;
    
}