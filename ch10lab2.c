//ch10lab2.c
#include <stdio.h>
int main()
{
     int a , b;

     printf("���� 2���� �Է��Ͻÿ�: ");
     scanf("%d %d", &a, &b);

     if (a%2==0 && b%2==0){
          printf("¦��");
     }
     else if(a%2==1 && b%2==1){
          printf("Ȧ��");
     }
     else{
          printf("Ȧ¦");
     }
}
