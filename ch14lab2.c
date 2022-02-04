//ch14lab2.c
#include <stdio.h>
int main()
{
    int a, b;
    printf("정수 2개를 입력하세요(작은수 큰수 순서로): ");
    scanf("%d %d", &a, &b);

    for(int i=a;i<=b;i++){
        if(i%2==1)
            printf("%d ", i);
    }

}

