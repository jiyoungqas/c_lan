//ch25ex1-1.c
#include <stdio.h>
void print_gugudan(int dan);

int main()
{
    int n;
    printf("단을 입력: ");
    scanf("%d", &n);
    print_gugudan(n);
    return 0;
}

// ---------------------------------------
void print_gugudan(int dan)
{
    int i;
    for(i=1; i<=9; i++){
        printf("%d * %d = %d\n", dan, i, dan*i);
        }
}
