//ch24ex1.c
#include <stdio.h>

//전역변수 선언
int global_v1;

int main()
{
    int local_v1 = 10;
    int x = 5;
    printf("x: %d, local_v1: %d, global_v1: %d\n", x, local_v1, global_v1);

    //함수 호출
    global_local_fn();
    return 0;
}

int global_v2;

void global_local_fn()
{
    int local_v2 = 20;
    int x = 50;
    printf("x:%d, local_v2:%d, global_v1:%d, global_v2:%d\n",x,local_v2,global_v1,global_v2);
    return;
}
