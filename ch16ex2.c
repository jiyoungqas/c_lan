//2���� �ֻ����� ���� ���� �� ����ϱ�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dice1, dice2;

    srand((unsigned int)time(NULL));

    for(int i=1; ;i++){

    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;

    printf("ù ��° �ֻ���:%d, �� ��° �ֻ���: %d\n", dice1, dice2);

    if(dice1 == dice2)
        break;

    }
    return 0;
}
