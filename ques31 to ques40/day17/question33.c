/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>  // for pow()

int main() {
    int num, temp, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Step 1: Count digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // reset temp for next loop

    // Step 2: Calculate sum of each digit^digits
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);  // raise digit to 'digits'
        temp /= 10;
    }

    // Step 3: Compare with original number
    if (result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
