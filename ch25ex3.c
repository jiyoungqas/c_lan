//ch25ex3.c
//문자배열 전달하기
#include <stdio.h>
#include <string.h>
int main()
{
    char msg[10] = "Avengers";

    change_string(&msg); //배열 주소 전달

    printf("msg = %s\n", msg);
    return 0;
}

void change_string(char msg[])
{
    printf("%d\n", sizeof(msg));
    strcpy(msg, "XXXXXXXXX");
}
