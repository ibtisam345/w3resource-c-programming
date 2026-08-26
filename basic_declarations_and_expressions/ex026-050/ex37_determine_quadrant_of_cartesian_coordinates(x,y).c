/*
 * ==========================================================
 * 37. Determine quadrant of Cartesian coordinates (x, y)
 * --------------------------------------------------------------------------
 * Write a C program to read the coordinates (x, y) (in the Cartesian system)
 * and find the quadrant to which it belongs (Quadrant -I, Quadrant -II,
 * Quadrant -III, Quadrant -IV).
 * Note: A Cartesian coordinate system is a coordinate system that specifies
 * each point uniquely in a plane by a pair of numerical coordinates.
 * These are often numbered from 1st to 4th and denoted by Roman numerals:
 * I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
 * --------------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 26 August, 2026
 * ==========================================================
 */

#include <stdio.h>

int main(void) {

    // Declare variables to store coordinate values
    int x, y;

    // Read coordinate values from the user
    printf("Input the coordinates(x, y)\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    // Check sign and show its quadrant
    if(x > 0 && y > 0) {
        printf("Quadrant-I(+,+)\n");
    }
    else if(x > 0 && y < 0) {
        printf("Quadrant-IV(+,-)\n");
    }
    else if(x < 0 && y > 0) {
        printf("Quadrant-II(-,+)\n");
    }
    else if(x < 0 && y < 0) {
        printf("Quadrant-III(-,-)\n");
    }
    else {
        printf("The point lies on an axis or at the origin.\n");
    }
    
    // Terminate the program
    return 0;
}