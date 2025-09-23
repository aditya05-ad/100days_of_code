#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    // Conversion
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
