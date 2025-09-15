#include <stdio.h>

int main() {
    int num, temp, remainder, reversed = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    if (num == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
