/*
*   20. Solve quadratic equation using Bhaskara's formula
*
*   Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers.
*   Display a message if it is not possible to find the roots.
*/

#include <stdio.h>
#include <math.h>

int main() {

    // Declare variables
    float a, b, c;      // variables for input
    float D; // Store the discriminant
    float root1, root2; // For roots

    /*
        What is Bhaskara's formula?
        it is the formula (-b +- sqrt(D)) / 2a 
    */
    
    // Read input from user
    printf("Input the first number (a): ");
    scanf("%f", &a);
    printf("Input the second number (b): ");
    scanf("%f", &b);
    printf("Input the third number (c): ");
    scanf("%f", &c);

    // If a=0. it is not a quadratic equation
    if(a == 0) {
        printf("Not a quadratic equation.\n");
    }

    else {
        D = b*b - 4*a*c; // Calculate the discriminant

        if(D < 0) {
            printf("No real roots available.\n");
        }
        
        // Calculate the roots
        else {
            root1 = (-b + sqrt(D)) / (2 * a); 
            root2 = (-b - sqrt(D)) / (2 * a);

            // Show the results
            printf("Root1 = %.5f\n", root1);
            printf("Root2 = %.5f\n", root2);
        }
    }
    
    // Terminate the program successfully
    return 0;
}

