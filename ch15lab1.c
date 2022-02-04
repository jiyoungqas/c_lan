#include <stdio.h>
int main()
{
    int n, a;
    int mul = 1;
    printf("입력의 개수: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        printf("%d번째 수:", n);
        scanf("%d", &a);

        if(a== 0) continue;
        if(a < 0 ) break;
    }
        mul *= a;
        printf("계산값: %d", mul);
}
