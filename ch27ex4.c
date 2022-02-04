//ch27ex4.c
//파일 random access를 위한 fseek 함수 사용하기
#include <stdio.h>
int main()
{
    int ch;

    FILE *fptr = fopen("test.txt", "wt");
    fputs("0123456789abcdefg", fptr);
    fclose(fptr);

    //파일 오픈
    fptr = fopen("test.txt", "rt");

    //SEEK_SET 테스트
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
