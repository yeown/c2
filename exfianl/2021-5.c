#include <stdio.h>

int main(){
    unsigned long long st, nd, sum;
    scanf("%llu %llu", &st, &nd);
    sum = st + nd;
    printf("1st integer %llu\n", st);
    printf("2nd integer %llu\n", nd);
    printf("%llu\n", sum);
    return 0;
}