#include <stdio.h>
#include <string.h>

void sortString(char* *list, int nLength){
    for(int i = 0; i<nLength; i++){
        for(int j = i+1; j<nLength; j++){
            if(strcmp(list[i],list[j]) > 0){
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