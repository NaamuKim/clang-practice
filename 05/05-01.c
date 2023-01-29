#include <stdio.h>

int main(void){
    int nMax = -100, nInput = 0;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;    
    
    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("Max : %d\n", nMax);
}