#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long total = n * (n + 1) / 2;

    long long root = (long long)sqrt((double)total);

    if (root * root == total)
        printf("%lld\n", root);
    else
        printf("-1\n");

    return 0;
}
