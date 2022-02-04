//ch10ex1.c
//국영수 성적을 입력받아 합격여부 출력하기
//모든 과목이 40점 이상이고, 평균은 70점 이상이어야 합격이다.

#include <stdio.h>

int main()
{
     int kor,eng,math, avg;

     printf("국영수 성적을 차례대로 입력하세요: ");
     scanf("%d %d %d", &kor, &eng, &math);

     avg = (kor+eng+math)/3;

     printf("국어: %d, 영어: %d, 수학: %d\n", kor, eng, math);
     if (avg>=70){
          if(kor >= 40 && eng >= 40 && math >= 40){
               printf("평균 %d점으로 합격입니다 ", avg);
          }
          else{
               printf("40점 미만인 과목이 있어서 아쉽지만 불합격입니다");

          }
     }
     else {
          printf("평균 %d점으로 불합격입니다", avg);
     }
     return 0;
}

