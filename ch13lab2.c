#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("정수 입력: ");
    scanf("%d", &n);
    int i = 1;

    while(i<=n){
        sum+= i;
        ++i;
    }
    printf("sum = %d", sum);
    return 0;
}
