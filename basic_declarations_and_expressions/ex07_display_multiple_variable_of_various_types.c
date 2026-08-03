/*
    7. Display multiple variables of various types

    Write a C program to display multiple variables.
*/

#include <stdio.h>

int main() {

    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;

    printf("%d and %d are integers.\n", a, b);
    printf("%ld is a long integer.\n", ax);
    printf("%hd is a short integer.\n", s);
    printf("%f is a floating point.\n", x);
    printf("%lf is a long floating point.\n", dx);
    printf("%c is a character.\n", c);
    printf("%lu is an unsigned long integer.\n", ux);
    
    return 0;
}