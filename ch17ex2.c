//5명 학생의 점수를 입력받아 80점 이상인 학생 수를 출력하기
#include <stdio.h>
int main()
{
    int i, cnt = 0;
    int score[5];

    //점수를 입력받아 배열에 저장하기
    for(i=0;i<5;i++){
        printf("%d번째 학생 점수를 입력: ", i+1);
        scanf("%d", &score[i]);
}
//80점 이상인 학생 탐색하기
    for(i=0;i<5;i++){
        if(score[i] >= 80){
            cnt++;
        }
    }
    printf("80점 이상인 학생 수: %d \n", cnt);
    //40점 미만인 학생 수 출력
    cnt = 0;
    for(i=0;i<5;i++){
        if(score[i] < 40){
            cnt++;
        }
    }
    printf("40점 미만인 학생 수: %d", cnt);
}
