//����ü�� �����ϰ� ����ü �迭�� ����� ����
#include <stdio.h>
struct st_info{
    char name[30];
    char subject[30];
    int age;
};

int main()
{
    struct st_info student[3] = {
                                {"������","c���",20},
                                {"ȫ�浿", "���̽�", 21},
                                {"�̼���", "�ڹ�", 22},
                                };
    for(int i=0;i<3;i++){
        printf("%s \t%s \t%d \n", student[i].name, student[i].subject, student[i].age);
    }

    return 0;
}
