// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
// Sample Input 1: 3
// Sample Output 1: Approximate sum: 3.3
// Sample Input 2: 5
// Sample Output 2: Approximate sum: 4.4

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    scanf("%d", &n); // Input number of terms

    int num = 1, den = 1; // numerator and denominator

    for (i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2; // numerator increases by 2: 1,3,5,7,...
        den += 2; // denominator increases by 2: 1,3,5,7,...
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
