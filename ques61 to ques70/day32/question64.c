// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count[10] = {0}; // count for each digit

    // Count the digits
    int n = num;
    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    int max_digit = 0, max_count = count[0];
    for (int i = 1; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);
    return 0;
}
