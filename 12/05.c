#include <stdio.h>
#include <time.h>

int getDate(void){
    int nDate;
    printf("날짜를 입력하시오 : ");
    scanf("%d", &nDate);
    return nDate;
}

time_t getNextDate(int nDate, time_t tCurrent){
    time_t tAfter;
    tAfter = tCurrent + (nDate * 24 * 60 * 60);
    return tAfter;
}

void printDate(time_t nextDate){
    struct pm *pmTime = {0};
    pmTime = localtime(&nextDate);
    printf("%s", asctime(pmTime));
}

int main(){
    int nDate = 0;
    time_t tCurrent, tAfter;
    time_t tTen, tHun;

    tCurrent = time(NULL);
    nDate = getDate();

    tAfter = getNextDate(nDate,tCurrent);

    printDate(tAfter);
}