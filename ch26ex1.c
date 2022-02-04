// ch26ex1.c
// 성적을 입력받아 평균을 계산하는 구조화 프로그래밍
#include <stdio.h>
#define MAX_SIZE 5
void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);
int main()
{
    float avg;
    int scores[MAX_SIZE];

    input_score(scores); //배열 시작 주소 전달
    avg = compute_avg(scores); // 반한된 평균값을 avg에 저장
    print_avg(avg);

    return 0;
}
void input_score(int scores[]) // 포인터 변수 선언
{
    int i;
    for(i=0;i<MAX_SIZE;i++) {
        printf("%d번째 학생 성적을 입력하세요: ", i+1);
        scanf("%d", &scores[i]);
    }
}
float compute_avg(int scores[])
{
    int i, sum = 0;
    for(i=0;i<MAX_SIZE;i++){
        sum += scores[i];
    }
    return ((float)sum/MAX_SIZE); //실수  나눗셈을 위한 형 변환
}

void print_avg(float avg)
{
     printf("평균은 %.1f점입니다\n", avg);

}
