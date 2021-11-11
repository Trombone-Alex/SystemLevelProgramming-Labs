/*
 * calcPrice.c
 * Alex Siegel - asiegel11@student.gsu.edu
 *
 * Takes an item number, unit price, and quanitity
 * and displayes the total price
 */

#include <stdio.h>

int main(void){

        // Variables to store inputs
        int item, quantity;
        double price;
        char date[10];

        // Reads inputs and assigns them to variables
        printf("Enter item number:");
        scanf("%i", &item);

        printf("Enter unit price:");
        scanf("%lf", &price);

        printf("Enter quanitity:");
        scanf("%i", &quantity);

        printf("Enter purchase date (mm/dd/yyyy):");
        scanf("%s", date);

        double total = price * quantity;
        printf("Item    Unit Price      QTY     Purchase Date   Total Amount\n");
        printf("%i      $    %.2f       %i      %s      $     %.2f\n", item, price, quantity, date, total);
        return 0;
}
