#include <stdio.h>
#include <mem.h>

int main() {
    printf("please enter the string you want to reverse it : ");
    char s[100];
    gets(s);
    for(int i = strlen(s)-1;i>=0;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
