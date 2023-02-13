#include <stdio.h>
#include <string.h>

int main(void){
    char szBuffer[32] = {"You are a girl."};
    char *pszData = szBuffer + 4;

    printf("%c\n", szBuffer[0]);
    printf("%c\n", pszData[0]);
    // %c이므로 해당 주소에 해당하는 배열원소나옴
    printf("%c\n", pszData[6]);

    printf("%s\n", szBuffer + 4);
    printf("%s\n", pszData);
    // %s이므로 포인터 뒤에 있는 문자열 나옴
    printf("%s\n", pszData + 4);
    
    return 0;

    
}