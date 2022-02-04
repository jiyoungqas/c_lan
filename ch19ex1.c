#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char addr[50];

    puts("영문 주소를 입력하세요: ");
    gets(addr);

    for(i = strlen(addr)-1; i>=0; i--){ //거꾸로 출력
        putchar(addr[i]);
    }
    return 0;
}
