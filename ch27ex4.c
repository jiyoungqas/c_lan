//ch27ex4.c
//���� random access�� ���� fseek �Լ� ����ϱ�
#include <stdio.h>
int main()
{
    int ch;

    FILE *fptr = fopen("test.txt", "wt");
    fputs("0123456789abcdefg", fptr);
    fclose(fptr);

    //���� ����
    fptr = fopen("test.txt", "rt");

    //SEEK_SET �׽�Ʈ
    fseek(fptr, 3, SEEK_SET);
    ch = fgetc(fptr);
    putchar(ch);

    //SEEK_CUR
    fseek(fptr, 3, SEEK_CUR);
    ch = fgetc(fptr);
    putchar(ch);

    //SEEK_END
    fseek(fptr, -3, SEEK_END);
    ch = fgetc(fptr);
    putchar(ch);

    fclose(fptr);
    return 0;
}
