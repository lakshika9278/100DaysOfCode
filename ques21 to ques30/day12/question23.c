#include <stdio.h>

int main() {
    int daysLate, fine = 0;

    // Input number of late days
    printf("Enter number of late days: ");
    scanf("%d", &daysLate);

    if (daysLate <= 5) {
        fine = daysLate * 2;   // First 5 days ₹2/day
        printf("Fine ₹%d\n", fine);
    }
    else if (daysLate <= 10) {
        fine = (5 * 2) + (daysLate - 5) * 4;  // Next 5 days ₹4/day
        printf("Fine ₹%d\n", fine);
    }
    else if (daysLate <= 30) {
        fine = (5 * 2) + (5 * 4) + (daysLate - 10) * 6;  // Next 20 days ₹6/day
        printf("Fine ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled\n");  // More than 30 days
    }

    return 0;
}
