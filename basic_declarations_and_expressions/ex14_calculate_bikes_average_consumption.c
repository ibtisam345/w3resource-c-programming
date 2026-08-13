/*
*   14. Calculate bike’s average consumption: 
*   Write a C program to calculate a bike’s average consumption from the given total distance (integer value)
*   travelled (in km) and spent fuel (in liters, float number – 2 decimal points).
*
*   @author: Muhammad Ibtisam Adnan
*   @date  : 06 August, 2026
*   @updateDate: 13 August, 2026
*/

#include <stdio.h>

int main() {

    // Declare variables
    int distance; 
    float fuel_spent; // e.g, 6.22
    float average_consumption; 

    // Read input from user
    printf("Input total distance in km: ");
    scanf("%d", &distance);
    printf("Input total fuel spent in liters: ");
    scanf("%f", &fuel_spent);

    // Calculate average consumption 
    // Average consumption = distance(km) / fuel consumed
    if(fuel_spent == 0 || fuel_spent < 0) {
        printf("No fuel used yet!\n");
    }

    else if(fuel_spent != 0) {
        average_consumption = distance / fuel_spent;

        // Show the result (3 decimal points)
        printf("Average consumption (km/lt): %.3f", average_consumption);
    }
    
    // Terminate the program successfully
    return 0;
}