//ch11ex2.c
//���� �����ڷ� ū �� ���� �� �Ǻ��ϱ�
#include <stdio.h>
int main()
{
     int num, num2, large, small;

     printf("2���� ������ �Է��ϼ���:");
     scanf("%d %dN", &num, &num2);

     large = num > num2 ? num : num2;
     small = num < num2 ? num : num2;
     printf("ū ���� %d\n", large);
     printf("���� ���� %d", small);

     return 0;
     }
