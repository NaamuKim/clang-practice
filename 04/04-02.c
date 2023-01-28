#include <stdio.h>

int main(void){
    int nSec = 0;
    scanf("%d", &nSec);
    printf("%d초는 %02d시간 %02d분 %02d초입니다.\n",
        nSec,
        nSec / (60 * 60),
        // 3600으로 나눈 나머지는 분에 해당하는 초이고 이를 60으로 나눈 몫은 분의 값이다.
        nSec % (60 * 60) / 60,
        nSec % 60
    );
    return 0;
}