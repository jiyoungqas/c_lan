//ch10ex1.c
//������ ������ �Է¹޾� �հݿ��� ����ϱ�
//��� ������ 40�� �̻��̰�, ����� 70�� �̻��̾�� �հ��̴�.

#include <stdio.h>

int main()
{
     int kor,eng,math, avg;

     printf("������ ������ ���ʴ�� �Է��ϼ���: ");
     scanf("%d %d %d", &kor, &eng, &math);

     avg = (kor+eng+math)/3;

     printf("����: %d, ����: %d, ����: %d\n", kor, eng, math);
     if (avg>=70){
          if(kor >= 40 && eng >= 40 && math >= 40){
               printf("��� %d������ �հ��Դϴ� ", avg);
          }
          else{
               printf("40�� �̸��� ������ �־ �ƽ����� ���հ��Դϴ�");

          }
     }
     else {
          printf("��� %d������ ���հ��Դϴ�", avg);
     }
     return 0;
}

