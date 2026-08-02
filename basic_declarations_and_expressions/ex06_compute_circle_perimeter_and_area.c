/*
    6. Compute circle perimeter and area

    Write a C program to compute the perimeter and area of a circle with a given radius.
    Expected Output:
    Perimeter of the Circle = 37.680000 inches
    Area of the Circle = 113.040001 square inches
*/

/*
    Solved by Ibtisam Adnan on 2nd August, 2026 ...
*/
#include <stdio.h>

int main() {
    float radius, perimeter, area;
    const float pi = 3.1416;

    // Taking input from user
    printf("Enter the radius of circle: \n"); // inche
    scanf("%f", &radius);

    perimeter = 2 * pi * radius; // Formula of perimeter
    area = pi * radius * radius; // Formula of the area of a circle

    // Output the result
    printf("Perimeter of the circle = %f inches.\n", perimeter);
    printf("Area of the circle = %f square inches.\n", area);

    return 0;
}