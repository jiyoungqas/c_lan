/* ch14preex3.c
1~5 ������ ���ڸ� 3�ٿ� ����ϱ�*/
#include <stdio.h>
int main()
{
    int i, j;

  /*  for(j=1;j<=3;j++){

        for(i=1;i<=5;i++){
            printf("%d ", i);
            }
            printf("\n");
            }
    */
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

            return 0;
}
