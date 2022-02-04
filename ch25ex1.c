//ch25ex1.c
//함수 인수로 변수의 값을 전달하기
#include <stdio.h>
int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    get_twice(num);
    printf("in main() num is %d\n", num);
    return 0;

}

void get_twice(int num)
{
    num *= 2;
    printf("in get_twice() num is %d\n, num");
}
