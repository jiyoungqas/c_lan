//ch25ex1.c
//�Լ� �μ��� ������ ���� �����ϱ�
#include <stdio.h>
int main()
{
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);

    get_twice(num);
    printf("in main() num is %d\n", num);
    return 0;

}

void get_twice(int num)
{
    num *= 2;
    printf("in get_twice() num is %d\n, num");
}
