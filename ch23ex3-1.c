//구조체 포인터 배열 사용하기

#include <stdio.h>
#include <stdlib.h>
struct st_info{
    char name[30]; //이름
    char subject[30]; //과목
    int age; //나이
};

int main()
{
    struct st_info *st[3];
    int i;

    for(i=0;i<3;i++)
    {
        st[i] = (struct st_info *)malloc(sizeof(struct st_info)); //st_info 타입 데이터 한개 저장할 메모리 할당
        puts("학생 이름?");
        gets(st[i]->name);

        puts("등록 과목?");
        gets(st[i]->subject);

        puts("나이는?");
        scanf("%d", &st[i]->age);

        getchar();

    }
    printf("\n등록된 학생 정보 --------------\n");
    for(i=0;i<3;i++){
        printf("%s\t%s\t%d\n",st[i]->name,st[i]->subject,st[i]->age);
    }
}
