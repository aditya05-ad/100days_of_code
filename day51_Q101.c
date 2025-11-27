#include <stdio.h>

int main() {
    int n, target, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    int first = -1, last = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            first = i;
            break;
        }
    }

    for (i = n - 1; i >= 0; i--) {
        if (arr[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d %d\n", first, last);
    return 0;
}
