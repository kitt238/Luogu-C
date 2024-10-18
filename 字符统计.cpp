#include <stdio.h>
#include<string.h>
int main() {
    char str[10];
    fgets(str,sizeof(str),stdin);
    int cnt = strlen(str);
   for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\n')
             cnt--;
    }
    
    printf("%d", cnt);
    return 0;
}