#include <stdio.h>
#include <ctype.h>
int main()
{
    char pwd[20];
    int i, len, has_upper, has_lower, has_digit;

    has_upper = has_lower = has_digit = 0;

    puts("��ȣ�� �Է��ϼ���; ");
    gets(pwd);

    len = strlen(pwd);

    for(i=0; i<len; i++){
        if(isupper(pwd[i])){
            has_upper = 1;
        }
        else if(islower(pwd[i])){
            has_lower = 1;
        }
        else if(isdigit(pwd[i])){
            has_digit = 1;
        }
    }
    if(has_upper && has_lower && has_digit){
        printf("��ȣ�� �����մϴ�");
    }else{
    printf("��ȣ�� �ٽ� ����� �ּ���");
    }
    return 0;
}
