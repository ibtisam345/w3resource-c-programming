/*
*   19. Validate four integers based on conditions
*
*   Write a C program that accepts 4 integers p, q, r, s from the user
    where q, r and s are positive and p is even.
    If q is greater than r and s is greater than p and
    if the sum of r and s is greater than the sum of p and q
    print "Correct values", otherwise print "Wrong values".
*   
*   @author: Muhammad Ibtisam Adnan
*   @date  : 07 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int p, q, r, s;

    /*
        let me write down the conditions clearly
        1. q, r and s > 0, p is even 
        2. q > r and s > p
        3. (r + s) > (p + q) 
    */
    
    // Read input from user
    printf("Input the first integer: ");
    scanf("%d", &p);
    printf("Input the second integer: ");
    scanf("%d", &q);
    printf("Input the third integer: ");
    scanf("%d", &r);
    printf("Input the fourth integer: ");
    scanf("%d", &s);

    // Check all required condition
    if(q > 0 && r > 0 && s > 0 && (p % 2 == 0) && (q > r) && (s > p) && ((r + s) > (p + q))){ 
       printf("Correct values\n");
    }
    else {
        printf("Wrong values\n");
    }
    // Terminate the program successfully
    return 0;
}