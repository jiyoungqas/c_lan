//ch25ex2.c
//변수의 주소를 전달하기
#include <stdio.h>
int main()
{
    int n;
    printf("정수를 입력하세요: ");
    scanf("%d", &n);

    get_twice(&n);

    printf("in main() n = %d\n", n);
    return 0;
}
void get_twice(int *n)
{
    *n = *n * 2;
    printf("in twice() *n = %d\n", *n);
}
