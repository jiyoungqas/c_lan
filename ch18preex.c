/*ch18preex.c
문자배열 선언하고 문자열 저장하기*/
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
    month[5] = '\0'; //끝에 NULL 문자 추가하기
*/
    strcpy(month, "April");
    printf("\n%s", month);
    return 0;
}
