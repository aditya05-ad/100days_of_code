#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int numerator = 2 * i; 
        int denominator = 4 * i - 1;
        sum += (double)numerator / denominator;
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
