/*
    7. Display multiple variables of various types

    Write a C program to display multiple variables.
    Sample Variables :
    a + c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, 
    ax + b, s + c, ax + c, ax + ux
*/

#include <stdio.h>

int main() {

    int a = 125, b = 12345;             // Integer variable
    long ax = 1234567890;               // Long integer variable
    short s = 4043;                     // Short integer variable
    float x = 2.13459;                  // Floating-point variable
    double dx = 1.1415927;              // double precision variable
    char c = 'W';                       // character variable
    unsigned long ux = 2541567890;      // unsigned long integer variable

    /* Basic arithmetic and variable type conversion */

    // changed the variable type of "c" from character to integer 
    printf("a + c = %d\n", a + c); 

    // changed the variable type of "c" from character to floating-point 
    printf("x + c = %f\n", x + c);

    // changed the type of "x" from floatig-point to double precision
    printf("dx + x = %lf\n", dx + x);

    // converted "dx" to an integer and added it to "ax"
    printf("((int)dx) + ax = %ld\n", ((int)dx) + ax);

    // converted "a" to a floating-point variable 
    printf("a + x = %f\n", a + x);

    // short integer and integer type set
    printf("s + b = %d\n", s + b);

    printf("ax + b = %ld\n", ax + b);

    // %hd is the format specifier for short integer
    printf("s + c = %hd\n", s + c);
    printf("ax + c = %ld\n", ax + c);

    /*
    * %lu is the format specifier of unsigned long integer
    */
    printf("ax + ux = %lu\n",  ax + ux); 

    return 0;

/*
    Output: 
    
    a + c = 212
    x + c = 89.134590
    dx + x = 3.276183
    ((int)dx) + ax = 1234567891
    a + x = 127.134590
    s + b = 16388
    ax + b = 1234580235
    s + c = 4130
    ax + c = 1234567977
    ax + ux = 3776135780
*/
}