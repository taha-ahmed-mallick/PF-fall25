// Problem Link: https://leetcode.com/problems/roman-to-integer/

int val(char sym) {
    switch(sym) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int result = 0, current, next;
    for (int i = 0; s[i]!='\0'; i++) {
        current = val(s[i]);
        next = val(s[i+1]);
        if (current < next){
            result -= current;
        } else
            result += current;
    }
    return result;
}