#include <stdio.h>
int main()
{
    int n, a;
    int mul = 1;
    printf("�Է��� ����: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("%d��° ��:", n);
        scanf("%d", &a);

        if(a== 0) continue;
        if(a < 0 ) break;
    }
        mul *= a;
        printf("��갪: %d", mul);
}
