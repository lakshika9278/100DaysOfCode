// swap the first and last digit of a number without using arrays or strings

#include <stdio.h>

int main() {
    int num, n, first, last, pow = 1;
    scanf("%d", &num); // Input number

    n = num;
    last = n % 10;

    // Find the first digit and power of 10
    while (n >= 10) {
        n /= 10;
        pow *= 10;
    }
    first = n;

    if (pow == 1) {
        printf("%d\n", num); // Single digit
    } else {
        int middle = (num % pow) / 10;
        int swapped = last * pow + middle * 10 + first;
        printf("%d\n", swapped);
    }

    return 0;
}
