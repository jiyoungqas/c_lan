/*ch18preex.c
���ڹ迭 �����ϰ� ���ڿ� �����ϱ�*/
#include <stdio.h>

int main()
{
    char month[10] = "September";
    printf("%s", month);

    /*month[0] = 'A';
    month[1] = 'p';
    month[2] = 'r';
    month[3] = 'i';
    month[4] = 'l';
    month[5] = '\0'; //���� NULL ���� �߰��ϱ�
*/
    strcpy(month, "April");
    printf("\n%s", month);
    return 0;
}
