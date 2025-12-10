#include <stdio.h>

int count_words(const char *s)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            while (s[i] == ' ')
                i++;
        else
        {
            while (s[i] != ' ' && s[i] != '\0')
                i++;
            count++;
        }
        i--;
    }
    return count;
}

int main()
{
    char string[] = "This is a string with you can    say some spaces .";
    int count = count_words(string);
    printf("Word count: %d\n", count);
    return 0;
}