#include <stdio.h>

int main() {
    int a[][3] = {{1, 2, 3},
                  {4, 5, 6},
                  {7, 8, 9}};
    int *pa[] = {a[0], a[1], a[2]};
    int *p = a[0];

    int i;
    for(i = 0; i < 3; i++)
        printf("%d %d %d\n", a[i][2-i], *a[i], *(*(a+i)+i));
    putchar('\n');

    for ( i = 0; i < 3; i++)
        printf("%d %d\n", *pa[i], p[i]);
    putchar('\n');

    return 0;
}
/*
/Users/seoyeon-u/ment/m5-2
 *a[i] = a[i][0] 값
 * *(*(a+i)+i) = a[i][i] 값
3 1 1  -> a[0][2]위치의 값 출력 = 3
5 4 5  -> a[1][1]위치의 값 출력 = 5
7 7 9  -> a[2][0]위치의 값 출력 = 7

*pa[i] = a[i][0] 값
p[i] =  a[0][i] 값
1 1 ->*pa[0]은 a[0][0]일때의 값이 출력 = 1, p[0]은 *p가 a[0][0]이기에 = 1이 출력
4 2 ->*pa[1]은 a[1][0]일때의 값이 출력 = 4, p[1]은 *p가 a[0][1]이기에 = 2이 출력
7 3 ->*pa[2]은 a[2][0]일때의 값이 출력 = 7, p[2]은 *p가 a[0][2]이기에 = 3이 출력


 */
