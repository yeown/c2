#include <stdio.h>

long fiv(int f){
    if (f < 3)
        return 1;
    else
        return fiv(f-2) + fiv(f-1);
}

int main(){
    long a, b;
    int count = 0;
    scanf("%ld %ld", &a, &b);
    if ( 0 < a && a <= b && b<= 1000000000){
        for (int i = 0; fiv(i) < b+1 ; i++){
            if ( fiv(i) >= a){
                printf("%ld ", fiv(i));
                count++;
            }
        }
    }
    printf("\n");
    printf("%d", count);
    return 0;
}