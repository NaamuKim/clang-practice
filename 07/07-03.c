#include <stdio.h>

int main(void){
    int n =1;
    int sum =0; 
    while(n<=10){
        sum+=n++;
    }
    printf("Total: %d", sum); 
    return 0;
}