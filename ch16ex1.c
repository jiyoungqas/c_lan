//ch16ex1.c
//사용자가 입력한 문자가 소문자라면 대문자로 변경하여 출력하기

#include <stdio.h>
#include <ctype.h>
int main()
{
    int ch;

    while(1){
        ch = getchar();
        if(ch == EOF ) break;
        if(islower(ch)){
            ch = toupper(ch);
        }
        putchar(ch);
    }
    return 0;
}
