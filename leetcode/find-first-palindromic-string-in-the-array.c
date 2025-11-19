// Problem Link: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

char* firstPalindrome(char** words, int wordsSize) {
     for(int i=0; i<wordsSize;i++){
       char checkPalindrome[101] ="";
         for(int j=strlen(words[i])-1; j>=0; j--){
            checkPalindrome[strlen(words[i]) - j -1] =  words[i][j];
         } 
         checkPalindrome[strlen(words[i])] = '\0';
         if(strcmp(checkPalindrome,words[i])==0) return words[i];
     }

     return "";
}