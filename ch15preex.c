//ch15preex.c
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=5; j++){
        if(j==4) continue;
        printf("%d ", j);
    }
    printf("\n");
    }
return 0;
}
