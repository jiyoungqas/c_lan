//ch25ex2.c
//������ �ּҸ� �����ϱ�
#include <stdio.h>
int main()
{
    int n;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &n);

    get_twice(&n);

    printf("in main() n = %d\n", n);
    return 0;
}
void get_twice(int *n)
{
    *n = *n * 2;
    printf("in twice() *n = %d\n", *n);
}
