#include <stdio.h>

int main(void){
    char str[32]= {0};
    for(int i =0; i<=4; i++){
        str[i] = getchar();
    }
    printf("2번째 글자는 %c입니다.",str[1]);
    return 0;
}