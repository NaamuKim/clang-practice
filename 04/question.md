1. 연산의 중첩에서 연산의 임시결과란 무엇을 의미하며, 임시결과의 가장 중요한 특징은 무엇인가.
   연산이 중첩될 때 중간의 과정이 완료된 후 저장된 값을 의미하고 임시결과는 모든 연산 완료되면 휘발된다.

2. char형 자료와 int형 자료 간에 + 연산을 수행하면 임시결과의 자료형은 무엇인지 답하시오.
   char + int는 int이다 `'A'+1` char일 땐 'B' int일 땐 '66'

3. 2번 문제와 같은 현상을 부르는 용어는 무엇이며, 이형자료 간의 연산에서 임시결과에 대한 자료형이 결정되는 근거는 무엇인지 기술하세요.

`이형자료간의 연산` 이라고 부르며 `표현범위가 넓은(공간을 더 많이 차지할 수 있는) 형식으로 변경됨`

4. `5 / 2` 연산 결과의 자료형식과 값
   int 2

5. 사용자로부터 정수를 입력받아 5로 나눈 나머지를 출력하는 프로그램

```
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", n%5);
    return 0;
}
```

6. 대입 연산자의 왼쪽 피연산자가 될 수 있는 자격을 갖춘 대상을 부르는 용어는 무엇인가
   `l-value`

7. 다음 코드의 실행결과는 무엇인지 쓰세요.

```
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
```
