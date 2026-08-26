/*
 * ==========================================================
 * 36. Validate a password (1234 as correct)
 * ----------------------------------------------------------
 * Write a C program to read a password until it is valid. 
 * For wrong password print "Incorrect password" and for
 * correct password print, "Correct password" and quit the
 * program. The correct password is 1234.
 * ----------------------------------------------------------
 * Author: Muhammmad Ibtisam Adnan
 * Date  : 26 August, 2026
 * ==========================================================
 */

 // I added an alternative solution for this exercise.
#include <stdio.h>

int main(void) {

    // Declare a variable to store password
    int password;

    // Ask the user to enter the password at least once.
    // If password is incorrect, let the user try again
    do {
        printf("Input the password: ");
        scanf("%d", &password);

        if(password == 1234) {
            printf("Correct password!\n");
        }
        else {
            printf("Incorrect password! Try again.\n");
        }
    } 
    while (password != 1234);
    
    // Terminate the program
    return 0;
} 