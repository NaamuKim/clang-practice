#include <stdio.h>

int GetLength(char* str){
    int result =0;
    while(*str++!=NULL){
        result++;
    }
    return result;
}

int main(){
    char* str[10] = {"hid"};
    printf("%d", GetLength(*str));
    return 0;
}