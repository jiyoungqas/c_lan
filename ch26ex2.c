//ch26ex2.c
//����, ����, ���� �Լ��� �����ϰ� ȣ���ϰ� ��ȯ�� ����ϱ�
#include <stdio.h>
int plus(int a, int b);
int multiply(int a, int b);
int minus(int a, int b);
int main()
{
    int a,b;
    printf("2���� ���� �Է�: ");
    scanf("%d %d", &a, &b);

    printf("���� ���: %d\n", plus(a,b));
    printf("���� ���: %d\n", multiply(a,b));
    printf("���� ���: %d\n", minus(a,b));
}
int plus(int a, int b)
{
    return a+b;
}
int multiply(int a, int b)
{
    return a*b;
}
int minus(int a,int b)
{
    return a-b;
}
