// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    k = k % n; // To handle cases where k > n

    int res[n];
    // Move last k elements to the front
    for(int i = 0; i < k; i++) {
        res[i] = arr[n - k + i];
    }
    // Move the rest after them
    for(int i = k; i < n; i++) {
        res[i] = arr[i - k];
    }
    // Print rotated array
    for(int i = 0; i < n; i++) {
        printf("%d ", res[i]);
    }
    printf("\n");
    return 0;
}
