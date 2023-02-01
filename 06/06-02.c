#include <stdio.h>

int calcFee(int age, int fee){
    if(age<20) return fee - fee * 0.25;
    return fee;
}

int main(void){
    int age = 0;
    int price = 1000;
    scanf("%d", &age);
    printf("최종요금: %d원\n", calcFee(age, price));
    return 0;
}

