#include <stdio.h>

int main() {
    int n;
    long long product = 1;  
    int hasEven = 0;       

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("Product = %lld\n", product);
    else
        printf("No even numbers in the range.\n");

    return 0;
}
