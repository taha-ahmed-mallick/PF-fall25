#include <stdio.h>

void replace_spaces(char *s, char ch) {
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] == ' ')
            s[i] = ch;
}

int main() {
    char string[] = "This is a string with you can    say some spaces .";
    printf("\nBefore: %s\n", string);
    replace_spaces(string, '#');
    printf("After: %s\n", string);
    return 0;
}