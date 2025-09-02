#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;//(/)to get how many complete hours/minutes fit.
    minutes = (totalSeconds % 3600) / 60;//(%)to get what’s left over for the next unit.
    seconds = totalSeconds % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
