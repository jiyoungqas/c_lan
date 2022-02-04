#include <stdio.h>
void square(int num1, int num2);
int main()

{
    int a;
    int b;

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &a, &b);
    square(a, b);
    printf("In main() num1: %d, num2: %d", a,b);
}
void square(int num1, int num2){
    printf("In square(): num1: %d, num2: %d\n", num1*num1, num2*num2);
}
