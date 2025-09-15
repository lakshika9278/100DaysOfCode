/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    scanf("%d", &num);

    // Loop until the number becomes 0
    while (num > 0) {
        int digit = num % 10;   // Extract the last digit
        sum += digit;           // Add digit to sum
        num = num / 10;         // Remove the last digit
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}

