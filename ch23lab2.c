#include <stdio.h>
struct bookinfo {
char title[50];
char writer[50];
int price;
};
int main()
{
    struct bookinfo book[3];

    for(int i=0;i<3;i++)
    {
        printf("%d�� å�� ������?: ", i+1);
        gets(book[i].title);

        puts("å�� �۰���?");
        gets(book[i].writer);

        puts("å�� ������?");
        scanf("%d", &book[i].price);

        getchar();
    }
    printf("------- å�� ���� ----------\n");
    for(int i=0;i<3;i++){
            printf("#%d : \"%s\" by %s %d��\n", i+1, book[i].title, book[i].writer, book[i].price);
}
}
