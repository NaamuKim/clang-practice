#include <stdio.h>

int GetTotal(int (*aList)[4]){
    // 포인터의 배열꼴로 받으면 매개변수로 쓸 수 있음
    int nTotal = 0;
    for(int i = 0; i < 5; i++){
        for(int j =0; j < 4; j++){
            nTotal += aList[i][j];
        }
    }
    return nTotal;
}


int main(){
    int aList[5][4]={
        {0,1,2,3},
        {1,2,3,4},
        {2,3,4,5},
        {3,4,5,6},
        {4,5,6,7}
    };
    printf("%d\n", GetTotal(aList));
}