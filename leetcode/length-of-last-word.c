// Problem Link: https://leetcode.com/problems/length-of-last-word/

int lengthOfLastWord(char *s)
{
    int len = 0, started = 0;
    for (int i = strlen(s) - 1; i > -1; i--)
    {
        if (s[i] != ' ' && !started)
            started++;
        if (s[i] != ' ' && started)
            len++;
        if ((s[i] == ' ' || i == 0) && started)
            return len;
    }
    return 0;
}