/*Q35: Write a program to print all factors of a given number.


Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>

int main() {
    int num;

    // Taking input from the user
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop from 1 to num
    // Any number that divides 'num' completely is a factor
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {   // If remainder is 0, 'i' is a factor
            printf("%d ", i);
        }
    }

    return 0;
}
