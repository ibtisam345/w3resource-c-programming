/*
*   24. Check if two integers are multiples
*
*   Write a C program that reads two integers and checks whether they are multiplied or not.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 09 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int integer1, integer2;

    // Read input from user
    printf("Input the first number: ");
    scanf("%d", &integer1);
    printf("Input the second number: ");
    scanf("%d", &integer2);

    // Check conditions
    if (integer1 != 0 && integer2 != 0) {

        if(integer1 % integer2 == 0) {
            printf("Multiplied!\n");
        }
        else if(integer2 % integer1 == 0) {
            printf("Multiplied!\n");
        }
        else {
            printf("Not multiplied!\n");
        }

    }
    else {
        printf("Division by 0(zero) not possible.\n");
    }
    
    // Terminate the program
    return 0;
}