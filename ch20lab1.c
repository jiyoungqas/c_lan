#include <stdio.h>
int main()
{
    int num = 30;
    int *pX, *pY;

    pX = &num;
    pY = &num; //����

    *pY = *pY + 5; //������ ������
    printf("%d %d", *pY, *pX);

}
