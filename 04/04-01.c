#include <stdio.h>
// 두 정수를 입력받아 평균을 계산해 출력하는 프로그램
int main(){
    int a, b;
    printf("두 정수를 입력하세요.: ");
    scanf("%d%d", &a, &b);
    // 소수점 두자리까지 나오도록
    printf("평균: %.2f\n", (a+b)/2.0);
}