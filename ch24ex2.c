//ch24ex2.c
//���������� ����Ͽ� ������ �Է¹޾� ��� ����ϱ�
#include <stdio.h>

#define MAX_SIZE 5

//�������� ����
int scores[MAX_SIZE];
float avg;
void input_score();
void compute_avg();
void print_avg();

int main()
{
    input_score();
    compute_avg();
    print_avg();
    return 0;
}

void input_score()
{
    int i;
    for(i=0;i<MAX_SIZE;i++){
        printf("%d��° �л��� ������?:", i+1);
        scanf("%d", &scores[i]);

    }
}
// -----------------------------------
void compute_avg()
{
    int i, sum = 0;
    for(i=0; i<MAX_SIZE;i++){
        sum+=scores[i];
    }
    avg = (float)sum/MAX_SIZE;
}
//---------------------------------
void print_avg()
{
    printf("����� %.1�Դϴ�\n", avg);
}
