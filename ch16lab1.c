#include <stdio.h>
int main()
{
    char ch;

    printf("���� �ϳ��� �Է��ϼ���\n");
    scanf("%c", &ch);


    if(islower(ch) != 0) {
        printf("�ҹ����Դϴ�");
    }
    else if(isupper(ch) != 0){
        printf("�빮���Դϴ�");
    }
    else if(isdigit(ch) != 0){
        printf("�����Դϴ�");
    }
    else{
        printf("��/��/���� ���� ��� �ƴմϴ�");
    }
    return 0;
}
