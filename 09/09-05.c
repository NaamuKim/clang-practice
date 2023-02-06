#include <stdio.h>

int main(void){
    int nList[5][5]={0};
    int x = -1, y=0, nDirection=1, nCnt = 0;
    for(int i =9; i>0; i-=2){
        // 5 4 3 2 1 개 채우고 꺾기
        for(int j =0; j<i; ++j){
            if (j<(i/2)+1) x+=nDirection;
            else y+=nDirection;
            nList[y][x]= ++nCnt;
        }
        nDirection = -nDirection;
    }
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            printf("%d\t", nList[i][j]);
        }
        putchar('\n');
    }
    return 0;
}