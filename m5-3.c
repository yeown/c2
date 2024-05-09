#include <stdio.h>
#include <string.h>

int mystrlen(char *s[],int j){
    int a = 0;
    for (int i = 0; s[j][i] != '\0'; i++) {
        a++;
    }
    return a;
}

int main(){
    char *s[] = {"This is Labs", "Easy C Programming", "Have fun"};

    printf("with strlen()\n");
    int n = (int)(sizeof(s)/sizeof(char *));
    for (int i = 0; i < n; i++){
        printf("%s %d\n", *(s+i), (int)strlen(s[i]));
    }
    putchar('\n');
    printf("without mystrlen()\n");
    for (int i = 0; i < n; i++){
        printf("%s %d\n", *(s+i), mystrlen(s, i));
    }

    return 0;
}

