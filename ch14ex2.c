//ch14ex2.c
#include <stdio.h>
int main()
{
    int i, j;
  //printf("단을 입력하세요: ");
    //scanf("%d", &dan);
    for(i=1;i<=9;i++){
            for(j=1;j<=9;j++){
                printf("%d * %d = %d \n", i, j, i*j);
            }
    printf("\n");
    }
    // printf("%d * %d = %d\n", dan, i, dan*i);
    return 0;
}
