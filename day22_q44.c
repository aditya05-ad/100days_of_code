#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n >= 1)
        sum = 1.0;

    for (i = 2; i <= n; i++) {
        int numerator = 2 * i - 1;
        int denominator = 2 * i;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);

    return 0;
}
