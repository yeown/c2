#include <stdio.h>
#include <string.h>
#define MAX 1000

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(int v[], int left, int right) {
    int i, last;
    if (left >= right) {
        return;
    }
    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] > v[left]) {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

int main(int argc, char *argv[]){
    char c;
    int len=0, p=0, sum = 0;
    int n =0;
    int ch[MAX];
    while((c = getchar()) != EOF){
        if (c >= '0' && c <= '9') {
            sum = sum * 10 + (c - '0');
        }
        else if (c == '\n') {
            ch[n] = sum;
            n++;
            sum = 0;
        }
        }
    len = n;

    printf("After sort.\n");
    qsort(ch, 0, len-1);
    if(strcmp(argv[argc-1], "-n") == 0){
         for(int j = len-1; j > -1;j--){
            printf("%d\n",ch[j]);
            }
        }
    else{
        for(int i = 0; i < len; i++){
           printf("%d\n", ch[i]);
            }
        }

    return 0;
}