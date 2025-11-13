#include <stdio.h>
#include <string.h>
#include <ctype.h>
/* Write a function htoi(s) which converts a strnig of hexadecimal digits(including an optional 0X or 0x)
into its equivalent integer value. the allowable digits are 0-9, a through f and A through F
*/


int htois(const char *s) {
    if (!s) return -1;
    int i = 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) i = 2;

    int result = 0;
    for (; s[i] != '\0'; ++i) {
        unsigned char c = (unsigned char)s[i];
        int val;
        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'a' && c <= 'f') val = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        else {
            printf("Must be a valid hexadecimal string\n");
            return -1;
        }
        result = result * 16 + val;
    }
    return result;
}



int main(){
    int convert = htois("2BCC16");
    printf("%d",convert);
    return 0;
}