#include <stdio.h>

int main() {
    int n, binary[32], i = 0;  // n = input number, binary[] = store remainders, i = index

    // Step 1: Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Step 2: Special case - if the number is 0
    if (n == 0) {
        printf("Binary: 0\n");  // 0 in decimal is also 0 in binary
        return 0;
    }

    // Step 3: Convert decimal to binary by dividing by 2 repeatedly
    // We store the remainders (0 or 1) in an array
    while (n > 0) {
        binary[i] = n % 2;   // remainder → will be either 0 or 1 (a binary digit)
        n = n / 2;           // reduce n by dividing it by 2
        i++;                 // move to next index
    }

    // Step 4: Print the binary number
    // NOTE: The binary digits are stored in reverse order
    // Example: for 10 → remainders were [0,1,0,1]
    // So we print from the end to the beginning
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
