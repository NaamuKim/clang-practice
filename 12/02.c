#include <stdio.h>
#include <string.h>

int StringCompare(const char *p_string1, const char *p_string2)
{
    while(1){
        if(*p_string1 != *p_string2) break;
        if(*p_string1 == 0) break;
        p_string1++;
        p_string2++;
    }

    if(*p_string1 == *p_string2) return 0;
    if(*p_string1 > *p_string2) return 1;
    return -1;
}


void sortString(char* *list, int nLength){
    for(int i = 0; i<nLength; i++){
        for(int j = i+1; j<nLength; j++){
            if(StringCompare(list[i],list[j]) > 0){
                char* tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }
}

int main(void){
    char* aList[5]={
        "정형돈",
        "노홍철",
        "하하",
        "유재석",
        "박명수"
    };
    int i =0;

    sortString(aList, 5);

    for(i =0; i<5; ++i) puts(aList[i]);
    return 0;
}