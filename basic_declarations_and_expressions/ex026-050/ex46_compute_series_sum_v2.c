/*
 * ======================================================================
 * 46. Compute series sum S=1+3/2+5/4+7/8
 * ----------------------------------------------------------------------
 * Write a C program to calculate the value of S where
 * S = 1 + 3/2 + 5/4 + 7/8.
 * ----------------------------------------------------------------------
 * Author: Muhammad Ibtisam Adnan
 * Date  : 07 September, 2026
 * ======================================================================
 */

/* 
    I will add a better solution in future, Insha'Allah...
*/
#include <stdio.h>

int main(void) {
    float sum = 0;

    sum = 1 + 3/2 + 5/4 + 7/8;

    printf("%.2f", sum);

    return 0;
}