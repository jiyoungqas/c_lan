//������ ���� �˾ƺ���
#include <stdio.h>
int main()
{
    int age;
    int *pAge;

    age = 20;
    pAge = &age;
    printf("age = %d, %d\n", age, *pAge);
    printf("age�� �ּ�: %d, %d\n",&age, pAge);

    return 0;

}
