#include <stdio.h>
int main() {
    long long num;
    int digit, i;
    int freq[10] = {0};

    scanf("%lld", &num);

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    int maxFreq = freq[0];
    int mostFrequentDigit = 0;
    for (i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFrequentDigit = i;
        }
    }

    printf("%d\n", mostFrequentDigit);

    return 0;
}
