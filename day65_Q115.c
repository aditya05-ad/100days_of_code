#include <stdio.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};

    scanf("%s", s);
    scanf("%s", t);

    int i = 0;
    while (s[i] != '\0') {
        freq[s[i] - 'a']++;
        i++;
    }

    i = 0;
    while (t[i] != '\0') {
        freq[t[i] - 'a']--;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
