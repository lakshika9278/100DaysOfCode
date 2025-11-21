// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
// Sample Input 1: 3
// Sample Output 1: Approximate sum: 1.56
// Sample Input 2: 5
// Sample Output 2: Approximate sum: 2.22

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    scanf("%d", &n); // Input number of terms

    int num = 2, den = 3; // numerator and denominator

    for (i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2; // numerator increases by 2: 2,4,6,8,...
        den += 4; // denominator increases by 4: 3,7,11,15...
    }

    printf("Approximate sum: %.2f\n", sum);
    return 0;
}
