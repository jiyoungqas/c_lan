//ch14preex2.c
//1~10���� ���� ��
#include <stdio.h>
int main()
{
    int i, sum = 0;

    for(i=1;i<=10;i++)
        sum += i;
    printf("sum = %d\n", sum);

    //����ڷκ��� 1~n������ �����հ� ���ϴ� for�� �ۼ��ϱ�
    int n;
    sum = 0;

    printf("n:");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        sum += i;

    printf("sum = %d\n", sum);
    return 0;
}
