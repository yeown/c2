//terminal에 cal 6 2022
//입력-> 6월 달력 출력

#include <stdio.h>

int cal(int m, int y,int mon[12]){
    int sum = 0,lsum = 0, ysum = 0;
    for(int j = 0; j < y-1; j++) {
        for (int i = 0; i < m; i++) {
            sum += mon[i];
        }
        if((j+1 % 4) == 0) {
            sum = sum + 1;
        }
        ysum += sum;
    }
    for(int l = 0; l<m-1;l++){
            lsum += mon[l];
            if(y%4 == 0){
                if((l+1) == 2)
                    lsum = lsum+1;
        }
    }
    ysum = ysum+ lsum;
    return ysum;
    }


int main(){
    int m, y;
    int mon[12];
    int start;
    scanf("%d %d",&m,&y);
    for (int i = 1; i < 13 ; i++){
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 ||i==12)
            mon[i-1] = 31;
        else if(i == 2) {
            if (y % 4 == 0)
                mon[i-1] = 29;
            else
                mon[i-1] = 28;
        }
        else
            mon[i-1] = 30;
    }
    start = cal(m,y,mon) % 7;
    printf("%6d월 %d\n",m,y);
    printf("일 월 화 수 목 금 토\n");
    for(int k = 0; k < start; k++){
        printf("   ");
    }
    for(int i = 1; i < mon[m];i++){
        printf("%2d ",i);
        if((start+(i)) % 7 == 0)
            printf("\n");
    }
    if((start + mon[m-1]) % 7 != 0){
        printf("\n");
    }
    return 0;
}