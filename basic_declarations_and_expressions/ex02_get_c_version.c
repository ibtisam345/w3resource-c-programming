/*
*   Get the C version in use
*   
*   Write a C program to get the C version you are using.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 07 August, 2026
*/

#include <stdio.h>

int main() {

    // Check for C standard version
    #if __STDC__VERSION__ >= 201710L
        printf("We are using C18!\n");
    #elif __STDC__VERSION__ >= 201112L
        printf("We are using C11!\n");
    #elif __STDC__VERSION__ >= 199901L
        printf("We are using C99!\n");
    #else 
        printf("We are using C89/C90!\n");
    #endif

    // Terminate the program
    return 0;
}