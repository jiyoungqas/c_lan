// ch26ex1.c
// ������ �Է¹޾� ����� ����ϴ� ����ȭ ���α׷���
#include <stdio.h>
#define MAX_SIZE 5
void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);
int main()
{
    float avg;
    int scores[MAX_SIZE];

    input_score(scores); //�迭 ���� �ּ� ����
    avg = compute_avg(scores); // ���ѵ� ��հ��� avg�� ����
    print_avg(avg);

    return 0;
}
void input_score(int scores[]) // ������ ���� ����
{
    int i;
    for(i=0;i<MAX_SIZE;i++) {
        printf("%d��° �л� ������ �Է��ϼ���: ", i+1);
        scanf("%d", &scores[i]);
    }
}
float compute_avg(int scores[])
{
    int i, sum = 0;
    for(i=0;i<MAX_SIZE;i++){
        sum += scores[i];
    }
    return ((float)sum/MAX_SIZE); //�Ǽ�  �������� ���� �� ��ȯ
}

void print_avg(float avg)
{
     printf("����� %.1f���Դϴ�\n", avg);

}
