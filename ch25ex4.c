//ch25ex4.c
#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int num1 = 10, num2 = 20;
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    //num1�� ���� ����, num2, arr�� �ּ� ����
    change_datas(num1, &num2, arr);

    printf("�Լ� ȣ�� �� ������ ������ ��ȭ -----\n");
    printf("num1=%d, num2 = %d\n", num1, num2);\
    for(i=0;i<5;i++){
        printf("arr[%d] = %.1f\n", i, arr[i]);
    }
    return 0;
}
void change_datas(int num1, int *num2, float arr[])
{
    int i;
    num1 = 50;
    *num2 = 100;

    for(i=0;i<5;i++){
        arr[i] = arr[i] + 10;
    }
}
