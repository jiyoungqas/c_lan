//ch14lab2.c
#include <stdio.h>
int main()
{
    int a, b;
    printf("���� 2���� �Է��ϼ���(������ ū�� ������): ");
    scanf("%d %d", &a, &b);

    for(int i=a;i<=b;i++){
        if(i%2==1)
            printf("%d ", i);
    }

}

