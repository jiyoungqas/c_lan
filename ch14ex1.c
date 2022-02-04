//ch14ex1.c
//입력된 정수 중에서 최대값 최소값 찾기
#include <stdio.h>
int main()
{
    int i, max, min, num;
    max = 0;
    min = 100;

    for(i=0; i<5; i++){
        printf("%d번째 정수를 입력하세요: ", i+1);
        scanf("%d", &num);

        if(num>max) {
            max = num;
        }
        if(num<min){
            min = num;
        }
    }
    printf("최대값: %d, 최소값: %d", max, min);
    return 0;
}
