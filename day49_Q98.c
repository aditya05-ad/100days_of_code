#include <stdio.h>

int main() {
    char str[200];
    int i = 0, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ')
            lastSpace = i;
        i++;
    }

    printf("%c", str[0]);

    for (i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i+1] != '\n')
            printf(" %c", str[i+1]);
    }

    printf(" ");
    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
