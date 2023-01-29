#include <stdio.h>

int main(void){
    int height = 0;
    scanf("%d", &height);
    printf("%s", height >= 150 ? "합격" : "불합격");
    return 0;
}