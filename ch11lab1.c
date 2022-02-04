//ch11lab1.c
#include <stdio.h>
int main()
{
     int a, b;

     printf("정수 두 개를 입력하세요: ");
     scanf("%d %d", &a, &b);

     printf("%d",a>b ? a-b : b-a);

     return 0;
}
