/* ch27ex1.c
�ؽ�Ʈȭ���� ������� ���� ���ڿ� ���� */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");

    if(fptr == NULL){
        printf("file open fail");
        exit(1);
    }

    fputs("Hello!\n", fptr);
    fputs("Good Morning\n", fptr);
    fputc('A', fptr);
    fputc('B', fptr);
    fclose(fptr);
    return 0;
}
