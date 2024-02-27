/*
Jerry Rollings Odhiambo
Reg No: ENE212-0265/2020
*/


#include <stdio.h>

int main()
 {
    int arr[10]; // Array of size 10

    // Assigning values in ascending order, omitting the number from the middle
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1; // Assign 1 to 5
    }
    for (int i = 6; i < 10; i++) {
        arr[i] = i; // Assign 7 to 10
    }

    // Printing the array before insertion
    printf("Array before insertion:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reserving a location for the omitted number
    int omittedNumber = 6; // Number omitted from the middle
    int insertIndex = 4; // Index to insert the omitted number
    int removedNumber = arr[insertIndex]; // Number to be removed

    // Shifting elements to the right to make space for the omitted number
    for (int i = 8; i >= insertIndex; i--) {
        arr[i + 1] = arr[i];
    }

    // Inserting the omitted number
    arr[insertIndex] = omittedNumber;

    // Printing the array after insertion
    printf("Array after inserting %d:\n", omittedNumber);
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deleting the number that was inserted
    arr[insertIndex] = removedNumber;

    // Printing the array after deletion
    printf("Array after deleting %d:\n", omittedNumber);
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


