#include <stdio.h>

int main(void){
    int nMax = 0;
    int a, b, c;
    printf("a b c 를 입력하시오.");
    scanf("%d %d %d", &a, &b, &c);
    nMax = a > b ? a : b;
    nMax = nMax > c ? nMax : c; 
    printf("MAX : %d\n", nMax);
    return 0;
}