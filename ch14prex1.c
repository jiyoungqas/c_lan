#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("���� �Է�: ");
    scanf("%d", &n);
    int i = 1;

    while(i<=n){
        sum+= i;
        ++i;
    }
    printf("sum = %d", sum);
    return 0;
}
