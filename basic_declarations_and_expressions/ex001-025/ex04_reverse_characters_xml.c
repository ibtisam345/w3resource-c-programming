/*
*   4. Reverse characters ('X', 'M', 'L')
*
*   Write a C program to print the following characters in reverse.
*
*   @author: Muhammad Ibtisam Adnan
*   
*/

#include <stdio.h>

int main() {

    // Declare and initialize the character variables
    char char1 = 'X';
    char char2 = 'M';
    char char3 = 'L';

    // Print the original and reverse characters
    printf("The reverse of %c%c%c is %c%c%c",
        char1, char2, char3,
        char3, char2, char1);

    return 0;
}