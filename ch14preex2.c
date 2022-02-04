//ch14preex2.c
//1~10까지 누적 합
#include <stdio.h>
int main()
{
    int i, sum = 0;

    for(i=1;i<=10;i++)
        sum += i;
    printf("sum = %d\n", sum);

    //사용자로부터 1~n까지의 누적합계 구하는 for문 작성하기
    int n;
    sum = 0;

    printf("n:");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
        sum += i;

    printf("sum = %d\n", sum);
    return 0;
}
