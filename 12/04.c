#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <wchar.h>

int getRandom(void){
    srand((unsigned)time(NULL));
    return (rand() % 3);
}

int getUserNumber(void){
    int nUser;
    printf("가위바위보 게임 시작 \n");
    printf("숫자를 입력하시오. (scissors: 0, rock : 1, paper : 2) : ");

    scanf("%d", &nUser);
    if(nUser<0 || nUser>2){
        printf("숫자를 다시 입력하세요.");
        return getUserNumber();
    }
    return nUser;
}

char *toString(int nData){
    char *pszData = (char*)calloc(sizeof(char),10);
    if(nData == 0) strcpy(pszData,  "가위");
    else if(nData == 1) strcpy(pszData,  "바위");
    else strcpy(pszData, "보자기");
    
    return pszData;
}
int getResult(int nUser, int nAI){
    if(nUser==nAI) return 2;
    if(((nUser + 1) % 3 ) == nAI) return 1;
    return 0;
}
void printEnd(int nResult, wchar_t* pszUser, wchar_t* pszAI){
    printf("%s(YOU) vs %s(AI)", pszUser, pszAI);
}
int main(){
    int nUser = 0, nAI = 0;
    wchar_t *pszUser = NULL, *pszAI = NULL;
    nUser = getUserNumber();
    nAI = getRandom();

    pszUser = toString(nUser);
    pszAI = toString(nAI);
    int nResult = getResult(nUser,nAI);
    printEnd(nResult, pszUser, pszAI);
    free(pszUser);
    free(pszAI);
    return 0;
}
