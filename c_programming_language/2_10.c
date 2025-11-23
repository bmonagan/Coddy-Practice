#include <string.h>
#include <stdio.h>
int main(void){
    char word[32];
    scanf("%s",word);
    for (int i =0; i < strlen(word); i++){
        word[i] = (word[i] >= 'A' && word[i] <= 'Z') ? word[i] + 32 : word[i];
    }
    printf("%s", word);
}