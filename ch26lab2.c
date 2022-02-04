//1~n까지의 합계를 구하는 함수를 작성
#include <stdio.h>
int get_sum(int a);
int main()
{
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);

    printf("1~%d의 합계는 %d 입니다", a, get_sum(a));
}
int get_sum(int a)
{
    int sum;
    sum = 0;
       for(int i=1;i<=a;i++)
    {
        sum += i;
    }
    return sum;
}
