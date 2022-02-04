//ch23ex3.c

#include <stdio.h>
struct st_info{
    char name[30]; //이름
    char subject[30]; //과목
    int age; //나이
};

int main()
{
    struct st_info st[3];
    int i;
    for(i=0;i<3;i++){
        puts("학생 이름은?");
        gets(st[i].name);

        puts("등록 과목은?");
        gets(st[i].subject);

        puts("나이는?");
        scanf("%d", &st[i].age);

        getchar(); //버퍼에 남아있는 enter키 버려줌
    }


    printf("\n등록된 학생 정보 ----------------\n");
    for(i=0;i<3;i++){
        printf("%s\t%s\t%d\n",st[i].name, st[i].subject, st[i].age);
    }
    return 0;

}
