//ch11ex2.c
//조건 연산자로 큰 수 작은 수 판별하기
#include <stdio.h>
int main()
{
     int num, num2, large, small;

     printf("2개의 정수를 입력하세요:");
     scanf("%d %dN", &num, &num2);

     large = num > num2 ? num : num2;
     small = num < num2 ? num : num2;
     printf("큰 수는 %d\n", large);
     printf("작은 수는 %d", small);

     return 0;
     }
