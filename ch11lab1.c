//ch11lab1.c
#include <stdio.h>
int main()
{
     int a, b;

     printf("���� �� ���� �Է��ϼ���: ");
     scanf("%d %d", &a, &b);

     printf("%d",a>b ? a-b : b-a);

     return 0;
}
