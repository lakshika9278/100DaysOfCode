#include <stdio.h>
#include <math.h>  // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Output
    printf("Simple Interest=%f, Compound Interest=%f\n", simpleInterest, compoundInterest);

    return 0;
}


