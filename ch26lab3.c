//����� ���� ���ϴ� �Լ�
#include <stdio.h>
int get_count(int a);
int main()
{
    int a;
    printf("����� ���� ������ �Է��ϼ���: ");
    scanf("%d", &a);

    printf("%d�� ��� ������ %d�Դϴ�", a, get_count(a));
}
int get_count(int a)
{
    int b, cnt;
    cnt = 0;
    for(int i=1;i<=a;i++)
    {

        if(a%i==0){
            cnt += 1;
        }
    }
    return cnt;
}
