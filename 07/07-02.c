#include <stdio.h>

int main(void){
    int n=5, m=5;
    while(n--){
        while(m--){
            printf("* ");
        }
        m=5;
        printf("\n");
    }
    return 0;
}