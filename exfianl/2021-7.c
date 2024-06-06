#include <stdio.h>
#include <math.h>

long bin(long n){
    long b;long sum = 0;
    for (int i = 0; n > 0; i++){
        b = n%2;
        n /= 2;
        sum = b*pow(10,i) + sum;
    }
    return sum;
}

int main(){
    long i;
    printf("Enter decimal number: ");
    scanf("%ld", &i);
    printf("Binary number is %ld", bin(i));
    return 0;
}