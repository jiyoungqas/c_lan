#include <stdio.h>
//농구 선수의 성적이 저장돈 득점 배열과 어시스트 배열 2개가 존재한다.
//이때 최대 득점 경기를 찾아 해당 경기의 어시스트 횟수 출력하기
int main()
{
    int i, max, mark; //mark 최대값의 위치
    int score[5] = {10, 5, 8, 20, 16}; //득점 배열
    int assist[5] = {7,2,10,15,9}; //어시스트 배열

    max = 0; //최대값 0으로 초기화
    for(i=0;i<5;i++){
        if(score[i]>max){
            max = score[i];
            mark = i; // 최대값 위치 저장
        }
    }
    printf("최다 득점한 경기:%d 번째 최다 득점: %d 어시스트: %d", mark+1, max, assist[mark]);
    return 0;
}
