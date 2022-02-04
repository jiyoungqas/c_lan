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
        printf("%d번 책의 제목은?: ", i+1);
        gets(book[i].title);

        puts("책의 작가는?");
        gets(book[i].writer);

        puts("책의 가격은?");
        scanf("%d", &book[i].price);

        getchar();
    }
    printf("------- 책의 정보 ----------\n");
    for(int i=0;i<3;i++){
            printf("#%d : \"%s\" by %s %d원\n", i+1, book[i].title, book[i].writer, book[i].price);
}
}
