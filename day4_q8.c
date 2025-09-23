#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
