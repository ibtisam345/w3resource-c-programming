/*
*   16. Break amount into smallest banknotes
*
*   Write a C program to read an amount (integer value) and
*   break the amount into the smallest possible number of bank notes.
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 06 August, 2026
*/

#include <stdio.h>

int main() {
    // Declare variables
    int input_amount;
    int note_100, note_50, note_20, note_10, note_5, note_2, note_1;

    // Read input from user
    printf("Input the amount: ");
    scanf("%d", &input_amount);

    // Perform integer division and Remainder operation
    // Calculate the number of notes for each denomination
    note_100 = input_amount / 100;
    note_50 = (input_amount % 100) / 50;
    note_20 = ((input_amount % 100) % 50) / 20;
    note_10 = (((input_amount % 100) % 50) % 20) / 10;
    note_5 = ((((input_amount % 100) % 50) % 20) % 10) / 5;
    note_2 = (((((input_amount % 100) % 50) % 20) % 10) % 5) / 2;
    note_1 = ((((((input_amount % 100) % 50) % 20) % 10) % 5) % 2) ; // Looks like Pascal's triangle 😅

    // Show the result
    printf("There are: \n");
    printf("%d Note(s) of 100.00\n", note_100);
    printf("%d Note(s) of 50.00\n", note_50);
    printf("%d Note(s) of 20.00\n", note_20);
    printf("%d Note(s) of 10.00\n", note_10);
    printf("%d Note(s) of 5.00\n", note_5);
    printf("%d Note(s) of 2.00\n", note_2);
    printf("%d Note(s) of 1.00\n", note_1);

    /*
    >   The most repetitive, interesting, and funny exercise till now!
    */

    // Terminate the program successfully
    return 0;
}