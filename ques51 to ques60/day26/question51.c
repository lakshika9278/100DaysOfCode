// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        // Print leading spaces for indentation
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        // Print increasing numbers from i to 5
        for (int num = i; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}
