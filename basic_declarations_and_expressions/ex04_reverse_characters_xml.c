#include <stdio.h>

/*
    4. Reverse characters ('X', 'M', 'L')

    Write a C program to print the following characters in reverse.
    Test Characters: 'X', 'M', 'L'
    Expected Output:
    The reverse of XML is LMX
*/
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