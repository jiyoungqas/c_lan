//약수의 개수 구하는 함수
#include <stdio.h>
int get_count(int a);
int main()
{
    int a;
    printf("약수를 구할 정수를 입력하세요: ");
    scanf("%d", &a);

    printf("%d의 약수 개수는 %d입니다", a, get_count(a));
}
int get_count(int a)
{
    int b, cnt;
    cnt = 0;
    for(int i=1;i<=a;i++)
    {

        if(a%i==0){
            cnt += 1;
        }
    }
    return cnt;
}
