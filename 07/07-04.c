#include <stdio.h>

int main(void){
    int n = 0, i = 1; 
    scanf("%d", &n);
    if(n < 2 || n < 9){
        printf("Error");
        return 1;
    }
    while(i<=9){
        printf("%d * %d = %d\n", n, i, n * i );
    }
    return 0; 
}