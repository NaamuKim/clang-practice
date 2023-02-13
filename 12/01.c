#include <stdio.h>

void MyStrCpy(char* copied, int nSize, char* copy){
    for(int i =0; i<nSize; i++){
        copied[i]=copy[i];
        printf("%s\n", copied);
    }
}

int main(){
    char szBufferSrc[12]={"TestSTring"};
    char szBufferDst[12]={0};

    MyStrCpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);
    puts(szBufferDst);
    return 0;
}