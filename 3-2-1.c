#include <stdio.h>

void itoc(int n) {
    if (n != 0) {
        int temp = n;
        int digit = 0;
        while (temp != 0) {
            digit++;
            temp /= 10;
        }
        char arr[digit];
        for (int i = digit - 1; i > -1; i--) {
            arr[i] = (n % 10);
            n /= 10;
        }
        for (int i = 0; i < digit; i++) {
            putchar(arr[i] + '0');
        }
    }
    else {
        putchar('0');
    }
}


int Prime(int n){
    int i;
    for (i = 2; i * i <= n; i++) {
        if ((n % i) == 0) {
            return -1 ;
            }
        }
    return n;
    }

int Pl(int len, char ch[]){
    for (int j = 0; j < len; j++) {
        if (ch[j] == '+' || ch[j] == '-' || ch[j] == '*' || ch[j] == '/' || ch[j] == '%')
            return j;
    }
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
        default:
            break;
    }
    itoc(sum);
    putchar('\n');
}


int main(){
    int i, len, j, num = 0, p=0;
    int d = 0;
    char ac;
    char ch[1000];
    while((ac = getchar()) != EOF){
        ch[p] = ac;
        if (ch[p] == '\n') {
            ch[p] = '\0';
            len = p;
            break;
                }
        p++;
        }

    for (int l = 0; l < p && ch[l] != ' ';l++ ){
        if(ch[l] >= '0' && ch[l] <= '9') {
            num = num * 10 + ch[l] - '0';
        }
    }
    j = Pl(len, ch);
    for (i = 2; d < 10 ; i++) {
        if (Prime(i) != -1) {
            d++;
            Switch(num, Prime(i), ch[j]);
            }}

	return 0;
}
