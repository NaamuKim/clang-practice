#include <stdio.h>

int main(void){
    int sum =0;
    for(int i =4; i<=100; i+=4) sum+=i;
    printf("%d\n", sum);
    return 0;
}