#include <stdio.h>
int main() {
    int num, digit;
    long long onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;

        if (digit == 0)
            onesComplement += 1 * place;
        else
            onesComplement += 0 * place;

        num = num / 10;
        place *= 10;
    }

    printf("1's Complement = %lld\n", onesComplement);

    return 0;
}
