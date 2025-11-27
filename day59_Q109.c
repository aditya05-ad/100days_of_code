#include <stdio.h>

int main() {
    int n, k, i;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1\n");
        return 0;
    }

    int windowSum = 0;
    for (i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (i = k; i < n; i++) {
        windowSum += arr[i];
        windowSum -= arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d\n", maxSum);

    return 0;
}
