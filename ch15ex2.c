//ch15ex2.c
//1���� ��� �����հ踦 ���ذ��ٰ� ������ 100�� �ʰ��ϸ� ���߰� ���� ���� ����ϱ�
#include <stdio.h>
int main()
{
    int i=1, sum = 0;

    while(1){
        sum += i;
        if(sum > 100) break;
        i++;
    }
    printf("�������� ���� ��:%d\n", i);


    sum = 0;
    for(i=1; ;i++){
        sum += i;
    if(sum>100) break;
    }
    printf("�������� ���� ��: %d\n", i);
    return 0;
}
