#include <stdio.h>

int main() {
    char date[50];
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4)
        printf("%02d-Apr-%d\n", day, year);
    else
        printf("Unsupported month\n");

    return 0;
}
