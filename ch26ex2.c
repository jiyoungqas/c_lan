//ch26ex2.c
//µ¡¼À, »¬¼À, °ö¼À ÇÔ¼ö¸¦ Á¤ÀÇÇÏ°í È£ÃâÇÏ°í ¹İÈ¯°ª Ãâ·ÂÇÏ±â
#include <stdio.h>
int plus(int a, int b);
int multiply(int a, int b);
int minus(int a, int b);
int main()
{
    int a,b;
    printf("2°³ÀÇ Á¤¼ö ÀÔ·Â: ");
    scanf("%d %d", &a, &b);

    printf("µ¡¼À °á°ú: %d\n", plus(a,b));
    printf("°ö¼À °á°ú: %d\n", multiply(a,b));
    printf("»¬¼À °á°ú: %d\n", minus(a,b));
}
int plus(int a, int b)
{
    return a+b;
}
int multiply(int a, int b)
{
    return a*b;
}
int minus(int a,int b)
{
    return a-b;
}
