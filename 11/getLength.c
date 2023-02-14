#include <stdio.h>

int GetLength(char* str){
    int result =0;
    while(*str++ != "\0"){
        result++;
    }
    return result;
}

int main(){
    char str[10] = {"hid"};
    printf("%d", GetLength(str));
    return 0;
}