//ch25ex3.c
//���ڹ迭 �����ϱ�
#include <stdio.h>
#include <string.h>
int main()
{
    char msg[10] = "Avengers";

    change_string(&msg); //�迭 �ּ� ����

    printf("msg = %s\n", msg);
    return 0;
}

void change_string(char msg[])
{
    printf("%d\n", sizeof(msg));
    strcpy(msg, "XXXXXXXXX");
}
