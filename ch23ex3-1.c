//����ü ������ �迭 ����ϱ�

#include <stdio.h>
#include <stdlib.h>
struct st_info{
    char name[30]; //�̸�
    char subject[30]; //����
    int age; //����
};

int main()
{
    struct st_info *st[3];
    int i;

    for(i=0;i<3;i++)
    {
        st[i] = (struct st_info *)malloc(sizeof(struct st_info)); //st_info Ÿ�� ������ �Ѱ� ������ �޸� �Ҵ�
        puts("�л� �̸�?");
        gets(st[i]->name);

        puts("��� ����?");
        gets(st[i]->subject);

        puts("���̴�?");
        scanf("%d", &st[i]->age);

        getchar();

    }
    printf("\n��ϵ� �л� ���� --------------\n");
    for(i=0;i<3;i++){
        printf("%s\t%s\t%d\n",st[i]->name,st[i]->subject,st[i]->age);
    }
}
