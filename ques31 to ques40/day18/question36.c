/*Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    int hcf;   // variable to store the HCF

    // Method: Euclidean Algorithm
    // Keep dividing until one becomes 0
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;   // remainder
        x = temp;
    }
    hcf = x;

    // Print the HCF
    printf("%d\n", hcf);

    return 0;
}

