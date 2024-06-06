#include <stdio.h>
#include <stdlib.h>

int GCD(int num1, int num2){
    int gc = 1;
    for(int i = 1; i<=num1 && i<=num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gc = i;
        }
    }
    return gc;
}

int LCM(int num1, int num2, int gcd){
    int lc = 1;
    for(int i = 1; i <= gcd; i++){
        if(gcd % i == 0){
            if(num1 % i == 0 && num2 % i == 0){
                num1 /= i;
                num2 /= i;
                lc *= i;
            }
        }
    }
    lc = lc * num1 * num2;
    return lc;
}


int main(int argc, char *argv[]){
    if(argc != 3){
        return 0;
    }
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    for(int i = 1; i < argc; i++){
        printf("%s ",argv[i]);
    }

    printf("\n");
    printf("GCD = %d\n",GCD(num1, num2));
    printf("LCM = %d\n",LCM(num1,num2,GCD(num1,num2)));

    return 0;
}