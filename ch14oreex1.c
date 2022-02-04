//ch14preex1.c
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++){
        printf("%d\n", i);
    }
    printf("-------------------\n");


    //5~1까지 거꾸로 출력하기
    for(j=5;j>=1;j--){
        printf("%d\n", j);
    }
    printf("-------------------\n");
    for(i=2;i<=10;i+=2)
        printf("%d\n", i);
    printf("-------------------\n");
    for(i=10;i>=1;i-=2)
        printf("%d\n", i);
    printf("-------------------\n");
    for(i=9;i>=1;i-=2)
        printf("%d\n", i);

    return 0;
}
