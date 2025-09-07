/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>

int main() {
    int n, i=1;
    int factorial = 1;   // store factorial

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else {
        // Loop to calculate factorial
        for (i ; i <= n; i++) {
            factorial = factorial * i;
        }

        // Output result
        printf("the factorial of %d is %d\n",n, factorial);
    }

    return 0;
}
