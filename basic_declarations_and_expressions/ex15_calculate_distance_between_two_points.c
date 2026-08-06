/*
*   15. Calculate distance between two points: 
*   Write a C program to calculate the distance between two points.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 06 August, 2026
*
*/

#include <stdio.h>
#include <math.h> 
    /*
        <math.h> header file is needed for sqrt(), pow() operations
    */
int main() {

    // Declare variables
    int x1, y1, x2, y2;
    double distance;

    // Read input of the two points
    printf("Input x1: ");
    scanf("%d", &x1);

    printf("Input y1: ");
    scanf("%d", &y1);

    printf("Input x2: ");
    scanf("%d", &x2);

    printf("Input y2: ");
    scanf("%d", &y2);

    // Formula of distance between two points on a 2D Cartesian plane 
    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    // Show the result
    printf("Distance between the said points: %.4lf", distance);

    // Terminate the program successfully
    return 0;
}