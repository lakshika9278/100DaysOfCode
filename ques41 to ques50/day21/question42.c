//C program to check if a number is a perfect number, without using arrays or strings
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n); // Input number

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
