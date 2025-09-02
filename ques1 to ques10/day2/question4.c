// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include <stdio.h>
#define PI 3.1416   // approximate value of π

int main() {
    float radius, area, circumference;
    scanf("%f", &radius);

    area = PI * radius * radius;             // area=πr²
    circumference = 2 * PI * radius;         //circumference= 2πr

    printf("Area=%f, Circumference=%f\n", area, circumference);

    return 0;
}
