/* ch27ex2.c
�ؽ�Ʈ ȭ���� �б���� ���� ���ڵ����� �б� */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char buf[50];
    FILE *fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("file open fail");
        exit(1);
    }

    while(fgets(buf, sizeof(buf), fp) != NULL) { //�� �̻� �о�� �� ���ٸ� ������
        printf("%s", buf);
    }
    fclose(fp);

    return 0;
}
