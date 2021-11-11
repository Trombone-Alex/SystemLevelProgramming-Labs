/*
 * getPhoneNumber.c
 * Alex Siegel - asiegel11@student.gsu.edu
 *
 * Asks user to enter a phone number and prints the
 * number in a different format
 */
#include <stdio.h>
#include <string.h>

int main(void){
        //Character array for string
        char number[13];

        //Reads user input
        printf("Enter Phone Number [(xxx)xxx-xxxx]:");
        scanf("%s", number);

        // Prints out formatted string
        printf("You entered %c%c%c-%c%c%c-%c%c%c%c\n", number[1],number[2],number[3],number[5],number[6],number[7],number[9],number[10],number[11],number[12]);
        return 0;
}
