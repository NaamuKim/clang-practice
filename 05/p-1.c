#include <stdio.h>

int main(void){
    int nResult, w = 0, x = -1, y = -1, z =1;
    nResult = w++ || x++ && ++y || ++z;
    printf("%d %d %d %d %d\n", w, x, y, z, nResult);
    // 1 0 0 2 1(-1 && 2)
    printf("%d\n", -1 && 2);
    return 0;
}