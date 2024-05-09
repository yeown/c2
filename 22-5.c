#include <stdio.h>

int main(){
    int s;
    printf("Enter a decimal number: ");
    scanf("%d", &s);
    int j;
    int sum = 0;
    int digit = 1;
    while(s>0){
        j = s % 2;
        sum = sum + j * digit;
        s /= 2;
        digit *= 10;
    }
    printf("%d\n", sum);
    return 0;
}