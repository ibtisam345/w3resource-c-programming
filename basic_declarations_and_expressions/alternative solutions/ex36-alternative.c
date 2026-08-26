/*
 * ==========================================================
 * 36. Validate a password (1234 as correct)
 * (Alternative solution)
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

#include <stdio.h>

int main(void) {

    // Declare variables
    int password;
    const int correct_password = 1234; // Store the correct password

    // Ask the user to enter the password at least once.
    // If password is incorrect, let the user try again
    do {
        printf("Input the password: ");
        scanf("%d", password);

        if(password == correct_password) {
            printf("Correct password!\n");
        }
        else {
            printf("Incorrect password! Please try again.\n");
        }
    }
    while (password != correct_password);

    // Terminate the program
    return 0;
}