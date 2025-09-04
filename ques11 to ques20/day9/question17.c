#include <stdio.h>
#include <math.h>   // for sqrt()

int main() {
    double a, b, c;
    double discriminant, root1, root2, realPart, imagPart;

    // Input coefficients
    printf("Enter coefficients of quadratic equation a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Two different real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %f , %f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // Both roots are the same
        root1 = -b / (2 * a);
        printf("Roots are real and same: %f\n", root1);
    }
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %f + %fi , %f - fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
