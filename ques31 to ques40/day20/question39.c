/*Q39: Write a program to find the product of odd digits of a number.


Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main() {
    int num;
    int product = 1;   // initialize with 1 (important for multiplication)
    int hasOdd = 0;    // flag to check if at least one odd digit exists

    // Input the number
    scanf("%d", &num);

    // Loop through all digits
    while (num > 0) {
        int digit = num % 10;   // get last digit
        if (digit % 2 != 0) {   // check if digit is odd
            product *= digit;   // multiply into product
            hasOdd = 1;         // mark that we found an odd digit
        }
        num = num / 10;         // remove last digit
    }

    // If no odd digit found, product should be 1
    if (hasOdd == 0) {
        product = 1;
    }

    // Print the result
    printf("%d\n", product);

    return 0;
}
