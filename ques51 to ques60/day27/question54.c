// Q54: Write a program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    int n = 4; // height of upper pyramid (middle row has 2*n-1 stars)

    // Upper part including middle row
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part, excluding the middle row
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
