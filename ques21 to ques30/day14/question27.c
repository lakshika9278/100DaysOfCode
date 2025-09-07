/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (int i = 1; i <= n; i++) {
        sum =sum+ (2 * i - 1);  // formula for ith odd number
    }

    // Output the sum
    printf("%d\n", sum);

    return 0;
}
