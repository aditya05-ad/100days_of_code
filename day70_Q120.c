#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int newWord = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            newWord = 1;
            printf(" ");
        } else {
            if (newWord) {
                printf("%c", toupper(str[i]));
                newWord = 0;
            } else {
                printf("%c", tolower(str[i]));
            }
        }
    }

    return 0;
}
