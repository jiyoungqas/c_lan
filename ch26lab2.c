//1~n������ �հ踦 ���ϴ� �Լ��� �ۼ�
#include <stdio.h>
int get_sum(int a);
int main()
{
    int a;
    printf("������ �Է��ϼ���: ");
    scanf("%d", &a);

    printf("1~%d�� �հ�� %d �Դϴ�", a, get_sum(a));
}
int get_sum(int a)
{
    int sum;
    sum = 0;
       for(int i=1;i<=a;i++)
    {
        sum += i;
    }
    return sum;
}
