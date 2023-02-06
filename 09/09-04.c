#include <stdio.h>

int main(void){
    for(int i = 0; i<5; i++){
        if(i%2==0){
            for(int j =1; j<=5; j++){
                printf("%d\t", i*5+j);
            }
            printf("\n");
        }
        else{
            for(int j =5; j>=1; j--){
                printf("%d\t", i*5+j);
            }
            printf("\n");
        }
    }
    return 0;
}