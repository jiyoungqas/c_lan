//�� ���� ���� �߿� ū ���� ��ȯ�ϴ� �Լ�
#include <stdio.h>
int get_max(int a, int b);
int main()
{
    int a, b;

    printf("�� ���� �Է��ϼ���: ");
    scanf("%d %d", &a, &b);
    printf("�� �� �߿� ū ���� %d�Դϴ�", get_max(a,b));
}
int get_max(int a, int b)
{
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
