//ch24ex2.c
//전역변수를 사용하여 성적을 입력받아 평균 출력하기
#include <stdio.h>

#define MAX_SIZE 5

//전역변수 선언
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
        printf("%d번째 학생의 점수는?:", i+1);
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
    printf("평균은 %.1입니다\n", avg);
}
