#include <stdio.h>
int a;
int b;
int sum;
int main()
{

    printf("두 개의 정수 입력: ");
    scanf("%d %d", &a, &b);
    add();
    printf("덧셈 결과: %d", sum);
    return 0;
}
    void add()
    {
        sum = 0;
        sum = a+b;

    }


