/*
Jerry Rollings Odhiambo
Reg No: ENE212-0265/2020
*/

#include <stdio.h>

int main()
 {
    int array[10];
    int omittedNumber = 6; // Number to be omitted

    // Assigning numbers in ascending order with one number omitted
    int a, b;
    for (a = 0, b = 1; a < 10; a++) {
        if (a == 5) // Omitting number at index 5 (middle)
            continue;
        array[a] = b++;
    }

    // Reserving a location for the omitted number
    int reservedIndex = 5;

    // Inserting the omitted number
    array[reservedIndex] = omittedNumber;

    // Printing the array
    printf("Array with omitted number inserted:\n");
    for (a = 0; a < 10; a++) {
        printf("%d ", array[a]);
    }
    printf("\n");

    return 0;
}