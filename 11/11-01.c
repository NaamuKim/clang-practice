#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char szBuffer[12] = {"HelloWorld"};
    char *pszData = NULL;

    pszData = (char*)malloc( sizeof(char) * 12);
    // 깊은 복사
    strcpy(pszData, szBuffer);
    puts(pszData);
    // 할당 해제
    free(pszData);

    return 0;
}