#include <stdio.h>
#include <string.h>
int main()
{
    int i[2];
    int x = 10;
    int y = 20;

    swap(&x, &y);
    printf("%d %d\nswap() È£Ãâ µÚ", x, y);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

}
