/* ch27ex1.c
텍스트화일을 쓰기모드로 열어 문자열 쓰기 */
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
