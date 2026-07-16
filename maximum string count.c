#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);

    int max = 1, count = 1;

    for (int i = 1; i < strlen(s); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            if (count > max)
                max = count;
            count = 1;
        }
    }

    if (count > max)
        max = count;

    printf("%d", max);

    return 0;
}