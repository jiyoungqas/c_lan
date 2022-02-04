//ch10lab2.c
#include <stdio.h>
int main()
{
     int a , b;

     printf("Á¤¼ö 2°³¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
     scanf("%d %d", &a, &b);

     if (a%2==0 && b%2==0){
          printf("Â¦¼ö");
     }
     else if(a%2==1 && b%2==1){
          printf("È¦¼ö");
     }
     else{
          printf("È¦Â¦");
     }
}
