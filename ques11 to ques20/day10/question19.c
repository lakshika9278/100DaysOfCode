#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if sides can form a valid triangle (triangle inequality)
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Classify triangle
        if (a == b && b == c) {
            printf("Equilateral\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }
    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}
