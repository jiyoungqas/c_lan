#include <stdio.h>
int main()
{
    int num = 30;
    int *pX, *pY;

    pX = &num;
    pY = &num; //대입

    *pY = *pY + 5; //역참조 연산자
    printf("%d %d", *pY, *pX);

}
