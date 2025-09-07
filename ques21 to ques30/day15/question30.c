/*Q30: Write a program to reverse a given number.


Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Reverse logic
    while (n != 0) {
        remainder = n % 10;            // get last digit
        reversed = reversed * 10 + remainder; // append digit
        n = n / 10;                    // remove last digit
    }

    // Output reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}

