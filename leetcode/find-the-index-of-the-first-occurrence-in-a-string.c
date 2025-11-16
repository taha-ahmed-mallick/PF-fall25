// Problem Link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

int strStr(char *haystack, char *needle)
{
    for (int i = 0; haystack[i] != '\0'; i++)
        if (needle[0] == haystack[i])
        {
            int found = 1;
            for (int j = 0; needle[j] != '\0'; j++)
                if (haystack[i + j] != needle[j])
                {
                    found = 0;
                    break;
                }
            if (found)
                return i;
        }
    return -1;
}