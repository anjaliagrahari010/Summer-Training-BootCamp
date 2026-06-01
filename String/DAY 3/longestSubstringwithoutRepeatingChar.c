#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50], result[100];

    scanf("%s", str);
    scanf("%s", sub);

    char *pos = strstr(str, sub);

    if (pos) {
        int idx = pos - str;

        strncpy(result, str, idx);
        result[idx] = '#';

        strcpy(result + idx + 1, pos + strlen(sub));

        printf("%s", result);
    }
    else {
        printf("%s", str);
    }

    return 0;
}