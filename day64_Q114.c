#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    int lastIndex[256];
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int left = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0' && s[right] != '\n'; right++) {
        unsigned char ch = s[right];

        if (lastIndex[ch] >= left)
            left = lastIndex[ch] + 1;

        lastIndex[ch] = right;

        int currLen = right - left + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
