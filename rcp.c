//���������� ����
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t���� ���� �� ����\n");
    printf("-----------------------------------\n");


    char *game[3] = {"����", "����", "��"};

    int usr, com;
    while(1) {
    printf("1 - ����, 2 - ����, 3 - ��, 0 - ����\n");

    printf("����� ������?\n");
    scanf("%d", &usr);

    if(usr == 0) break;

    com = rand() % 3 + 1;

    if(usr==com){
        printf("user: %s, com: %s draw\n", game[usr-1], game[com-1]);
    }
    else if((usr==1&&com==3)||(usr==2&&com==1)||(usr==3&&com==2))
        printf("user: %s, com: %s user win\n", game[usr-1], game[com-1]);
    else {
        printf("user: %s, com: %s user lose\n", game[usr-1], game[com-1]);

    }
    }
}
