#include <stdio.h>

int getData(){
    int nInput = 0;
    printf("정수를 입력하세요. : ");
    scanf("%d", &nInput);
    return nInput;
}

int getMax(int a, int b, int c){
    int nMax = a;
    if(b>nMax) nMax = b;
    if(c>nMax) nMax = c;

    return nMax;
}

void printData(int a, int b, int c, int nMax){
        printf("%d, %d, %d 중 가장 큰 수는 %d입니다.\n", a, b, c, nMax);
}

int main(){
    int aList[3]={0};
    int nMax = -9999, i=0;
    for(i=0; i<3; ++i)
        aList[i]=getData();
    
    nMax = getMax(aList[0],aList[1],aList[2]);
    printData(aList[0],aList[1],aList[2],nMax);
    return 0;
}

