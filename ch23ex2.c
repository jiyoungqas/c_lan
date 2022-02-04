//구조체를 정의하고 구조체 배열을 사용해 보기
#include <stdio.h>
struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    struct st_info student[3] = {
                                {"임지영","c언어",20},
                                {"홍길동", "파이썬", 21},
                                {"이순신", "자바", 22},
                                };
    for(int i=0;i<3;i++){
        printf("%s \t%s \t%d \n", student[i].name, student[i].subject, student[i].age);
    }

    return 0;
}
