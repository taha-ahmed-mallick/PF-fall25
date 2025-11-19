// Problem Link: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
#include <stdbool.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
     char newWord1[1001];
     char newWord2[1001];
     for(int i=0;i<word1Size;i++){
            strcat(newWord1,word1[i]);
    }
     for(int i=0;i<word2Size;i++){
            strcat(newWord2,word2[i]);
    }

    if(strcmp(newWord1,newWord2) == 0) return true;
    else return false;
}