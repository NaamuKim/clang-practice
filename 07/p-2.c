#include <stdio.h>

int main(void){
   int i = 0, j = 0, k = 0;
 
    for ( i = 0; i < 5; i+=2 )
    {
        for ( k = 0; k < i; k+=2 )
        {
            printf(" ");
        }
        for ( j = 0; j < 5-i; j++ )
            printf("*");
        printf("\n");
    }
    return 0;
}