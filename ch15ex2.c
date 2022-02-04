//ch15ex2.c
//1부터 계속 누적합계를 구해가다가 총합이 100을 초과하면 멈추고 더한 숫자 출력하기
#include <stdio.h>
int main()
{
    int i=1, sum = 0;

    while(1){
        sum += i;
        if(sum > 100) break;
        i++;
    }
    printf("마지막에 더한 수:%d\n", i);


    sum = 0;
    for(i=1; ;i++){
        sum += i;
    if(sum>100) break;
    }
    printf("마지막에 더한 수: %d\n", i);
    return 0;
}
