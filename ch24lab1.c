#include <stdio.h>
int a;
int b;
int sum;
int main()
{

    printf("�� ���� ���� �Է�: ");
    scanf("%d %d", &a, &b);
    add();
    printf("���� ���: %d", sum);
    return 0;
}
    void add()
    {
        sum = 0;
        sum = a+b;

    }


