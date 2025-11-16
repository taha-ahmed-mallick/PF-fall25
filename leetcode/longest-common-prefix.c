// Problem Link: https://leetcode.com/problems/longest-common-prefix/
// #include <strings.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int max = 0;
    for (int i = 0; i < strsSize; i++) {
        int len = strlen(strs[i]);
        if (len > max) max = len;
    }
    max++;
    char* prefix = (char*)malloc(max*sizeof(char));
    for (int i = 0; i < max; i++) {
        char current;
        for (int j = 0; j < strsSize; j++) {
            if (j==0)
                current = strs[j][i];
            else if (current != strs[j][i]) {
                current = '\0';
                break;
            }
        }
        prefix[i] = current;
        if (current == '\0') break;
    }
    printf("%s", prefix);
    return prefix;
}