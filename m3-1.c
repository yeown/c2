#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    if (strcmp(argv[2], "-r") == 0){
        int a = atoi(argv[1]);
        int c = atoi(argv[3]);
        int d = atoi(argv[4]);
        int count = d - c + 1;
        int ac = (count / a);
        for (int j = 0; j < a; j++) {
            for (int l = d; l > d-ac; l--) {
                printf("%d ", l);
            }
            printf("\n");
            d -= ac;
        }
    }
    else {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int c = atoi(argv[3]);
        int count = c - b + 1;
        int ac = (count / a);
        for (int j = 0; j < a; j++) {
            for (int l = b; l < b + ac; l++) {
                printf("%d ", l);
            }
            printf("\n");
            b += ac;
        }
    }
    return 0;
}
