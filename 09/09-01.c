#include <stdio.h>

int main(void){
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, nTmp = 0;

    for(i =0; i<5; i++){
        nTmp = aList[i];
        for( j = i; j<5; j++){
            if(aList[j]<nTmp){
                aList[i] = aList[j];
                aList[j] = nTmp;
                nTmp = aList[i];
            }
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", aList[i]);
    }
    putchar('\n');
    return 0;
}