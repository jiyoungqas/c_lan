//5�� �л��� ������ �Է¹޾� 80�� �̻��� �л� ���� ����ϱ�
#include <stdio.h>
int main()
{
    int i, cnt = 0;
    int score[5];

    //������ �Է¹޾� �迭�� �����ϱ�
    for(i=0;i<5;i++){
        printf("%d��° �л� ������ �Է�: ", i+1);
        scanf("%d", &score[i]);
}
//80�� �̻��� �л� Ž���ϱ�
    for(i=0;i<5;i++){
        if(score[i] >= 80){
            cnt++;
        }
    }
    printf("80�� �̻��� �л� ��: %d \n", cnt);
    //40�� �̸��� �л� �� ���
    cnt = 0;
    for(i=0;i<5;i++){
        if(score[i] < 40){
            cnt++;
        }
    }
    printf("40�� �̸��� �л� ��: %d", cnt);
}
