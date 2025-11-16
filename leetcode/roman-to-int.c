// Problem Link: https://leetcode.com/problems/roman-to-integer/

int romanToInt(char* s) {
    int map[128] = {0};
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;
    int result = 0, current, next;
    for (int i = 0; s[i]!='\0'; i++) {
        current = map[s[i]];
        next = map[s[i+1]];
        printf("%d ", current);
        if (current < next){
            result += next - current;
            i++;
        } else
            result += current;
    }
    return result;
}