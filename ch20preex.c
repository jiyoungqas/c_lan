//포인터 변수 알아보기
#include <stdio.h>
int main()
{
    int age;
    int *pAge;

    age = 20;
    pAge = &age;
    printf("age = %d, %d\n", age, *pAge);
    printf("age의 주소: %d, %d\n",&age, pAge);

    return 0;

}
