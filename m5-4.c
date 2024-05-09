#include <stdio.h>

void b(int *p){
    printf("%d %d %d\n", p[0], p[-1], p[-2]);
    return;
}

int main() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = (int) (sizeof(a) / sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    putchar('\n');
    b(a + n - 1);

    return 0;
}

/*
/Users/seoyeon-u/ment/m5-4
0 1 2 3 4 5 6 7 8 9
 -> for문 통해 배열의 모든 수 출력
9 8 7]
a+n-1이 배열의 마지막 요소를 가리키기에 9부터 7까지 출력
*/


