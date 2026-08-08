/*
*   21. Check integer range or error for negative > 80
*
*   Write a C program that reads an integer and checks the specified range to which it belongs.
*   Print an error message if the number is negative and greater than 80.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 08 August, 2026
*/

#include <stdio.h>

int main(void) {
    int a; // Declare variable
    
    // Read input from user
    printf("Input an integer: ");
    scanf("%d", &a);

    // Check the conditions
    if(a < 0 || a > 80) { // A number cannot be negative and greater than 80 at the same time. So I use OR!
        printf("Error!\n");
    }

    else {
        if(a >= 0 && a <= 20) {
            printf("Range [0, 20]\n");
        }

        else if(a >= 21 && a <= 40) {
            printf("Range [21, 40]\n");
        }
        else if(a >= 41 && a <= 60) {
            printf("Range [41, 60]\n");
        }

        else {
            printf("Range [61, 80]\n");
        }
    }

    // Terminate the program successfully
    return 0;
}