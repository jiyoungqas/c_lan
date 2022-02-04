#include <stdio.h>
int main()
{
    char ch;

    printf("문자 하나를 입력하세요\n");
    scanf("%c", &ch);


    if(islower(ch) != 0) {
        printf("소문자입니다");
    }
    else if(isupper(ch) != 0){
        printf("대문자입니다");
    }
    else if(isdigit(ch) != 0){
        printf("숫자입니다");
    }
    else{
        printf("대/소/숫자 문자 모두 아닙니다");
    }
    return 0;
}
