#include <stdio.h>

int main(void){
    int nData = 0;
    int max = 0;
    scanf("%d", &nData);
    max = nData;
    scanf("%d", &nData);
    if(nData > max) max = nData;
    scanf("%d", &nData);
    if(nData > max) max = nData;
    printf("%d\n", max);
    return 0;
}