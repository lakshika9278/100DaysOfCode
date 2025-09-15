/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

// Function to find HCF using Euclidean Algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;
    }
    return a; // when b = 0, a is the HCF
}

int main() {
    int num1, num2;

    // Input two numbers
    scanf("%d %d", &num1, &num2);

    // Step 1: Find HCF
    int hcf = findHCF(num1, num2);

    // Step 2: Use formula to find LCM
    int lcm = (num1 * num2) / hcf;

    // Output the LCM
    printf("%d\n", lcm);

    return 0;
}
