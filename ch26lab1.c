//두 개의 정수 중에 큰 값을 반환하는 함수
#include <stdio.h>
int get_max(int a, int b);
int main()
{
    int a, b;

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("두 수 중에 큰 값은 %d입니다", get_max(a,b));
}
int get_max(int a, int b)
{
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}
