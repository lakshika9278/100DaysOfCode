/*Q40: Write a program to find the 1’s complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    // make a box (array) that can hold up to 100 characters (0s and 1s)
    char bin[100];
    int i = 0; // this will help us move through each character

    // take the binary number as input (like 1010, 1111, etc.)
    scanf("%s", bin);

    // go through the string until we reach the special end character '\0'
    while (bin[i] != '\0') {
        // if the current digit is 0, change it to 1
        if (bin[i] == '0')
            bin[i] = '1';
        // otherwise, if it is 1, change it to 0
        else
            bin[i] = '0';

        // move to the next digit
        i++;
    }

    // print the final result (the 1's complement)
    printf("%s", bin);

    return 0; // program ends
}

