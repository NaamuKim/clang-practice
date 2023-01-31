#include <stdio.h>

int main(void){
    for(int i =0; i<5; i++) {
        for(int j =0; j<5+i; j++){
            // 탭 탭 탭 탭 별
            // 탭 탭 탭 별 탭 별
            // 탭 탭 별 탭 별 탭 별
            // 탭 별 탭 별 탭 별 탭 별
            //
            if((i+j)%2) printf("*\t");
            else putchar('\t');
        }
        printf("\n");
    }
    return 0;
}