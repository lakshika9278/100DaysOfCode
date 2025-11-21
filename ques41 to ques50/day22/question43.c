// Q43: Write a program to check if a number is a strong number.
// Sample Input 1: 145
// Sample Output 1: Strong number
// Sample Input 2: 123
// Sample Output 2: Not strong number

#include <stdio.h>

// Function to find factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num, temp, sum = 0;
    scanf("%d", &num); // Input number
    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
