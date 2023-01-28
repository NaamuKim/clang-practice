#include <stdio.h>

int main(void){
    // 00080000
    printf("%08x\n", 0xFFFFFFFF & 0x00080000);
    // 00080000
    printf("%08x\n", 0xAAAABBBB & 0x00080000);
    // 00080000
    printf("%08x\n", 0xAABBCCDD & 0x00080000);

    // 앞에꺼
    printf("%08x\n", 0xFFFFFFFF | 0x00080000);
    printf("%08x\n", 0xAAAABBBB | 0x00080000);
    printf("%08x\n", 0xAABBCCDD | 0x00080000);

}