//strcat()�Լ� ����� ����
#include <stdio.h>
#include <string.h>

int main()
{
 /*   char str1[50] = "�ȳ��ϼ���";
    char str2[50] = "�ݰ�����~";

    strcat(str1, str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
   */
   //20���� �̳��� ���ڿ� �Է¹ޱ� ���� �迭
   char str1[21], str2[21];

   puts("ù ��° ���ڿ� �Է�");
   gets(str1);

   puts("�� ��° ���ڿ� �Է�");
   gets(str2);

   if (strcmp(str1, str2) == 0){
        printf("�� ���ڿ��� �����մϴ�");
   }
   else if(strcmp (str1, str2) < 0){
        printf("ù��° ���ڿ��� ���� �˻������� ���̳׿�");
   }
   else{
        printf("�� ��° ���ڿ��� ���� �˻������� ���̳׿�");
   }
    return 0;
}
