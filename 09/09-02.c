#include <stdio.h>

int main(void){
    int aList[5] = {30, 40, 10, 50,20};
    int i = 0, j = 0, nTmp = 0;

    for(i =0; i<4; i++){
        for(j=0; j<4; j++){
            if(aList[j+1]<aList[j]){
                // 인접한 항끼리 비교 후 교체
                nTmp=aList[j+1];
                aList[j+1]=aList[j];
                aList[j]=nTmp;
            }
        }
    }

    for(i =0; i<5; ++i) printf("%d\t",aList[i]);
    putchar('\n');
    return 0;
}