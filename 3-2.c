#include <stdio.h>

int Pl(int len, char arr[]){
    int a;
    for (int j = 0; j < len; j++) {
        a = 0;
        if (arr[j] == ' ' && arr[j + 2] == ' ') {
            a = j + 1;
            break;
        }
    }
    return a;
}

int NS(int a, char arr[]){
    int s = 0;
    for (int l = 0; l < a && arr[l] != ' '; l++) {
        if (arr[l] >= '0' && arr[l] <= '9') {
            s = s * 10 + arr[l] - '0';
        }
    }
    return s;
}

int NT(int a, char arr[], int len){
    int t = 0;
    for (int l = a + 2; l < len; l++) {
        if (arr[l] >= '0' && arr[l] <= '9') {
            t = t * 10 + arr[l] - '0';
        }
    }
    return t;
}

void Switch(int s, int t, char n){
    int sum = 0;
    switch (n) {
        case '+':
            sum = s + t;
            break;
        case '-':
            sum = s - t;
            break;
        case '*':
            sum = s * t;
            break;
        case '/':
            sum = s / t;
            break;
        case '%':
            sum = s % t;
            break;
    }
    printf("%d\n", sum);
}
/*
int thtn(int len, char arr[] ){
    for (int j = 0; j < len; j++) {
        int a = 0;
        if (arr[j] == '.') {
            a = j;
            return a;
        }
    }
    int s = 0;
    for (int l = 0; l < a ; l++) {
        if (arr[l] >= '0' && arr[l] <= '9') {
            s = s * 10 + arr[l] - '0';
        }
    }
}*/

int main(){
    char i;
    while ((i = getchar()) != EOF ) {
        char arr[1000];
        char n;
        int p, a, len, s, t, al;

        p = 0;
        while ((arr[p] = i) != '\n') {
            arr[p] = i;
            p++;
            i = getchar();
        }
        if (arr[p] == '\n') {
            arr[p] = '\0';
            len = p;
        }
        a = Pl(len, arr);
        n = arr[a];
        s = NS(a, arr);
        t = NT(a, arr, len);
        Switch(s, t, n);
    }
    return 0;
}