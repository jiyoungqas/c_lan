#include <stdio.h>
int main()
{
    int num1, num2;
    int *num_ptr;

    num_ptr = &num1;
    num1 = 25;
    *num_ptr = 10;

    printf("num1: %d, *num_ptr: %d\n", num1, *num_ptr);

    num2 = *num_ptr;
    num_ptr = &num2;
    printf("num2: %d, *num_ptr: %d\n", num2, *num_ptr);
//------------------------------------------------------------
    int i =5;
    float f= 3.14;
    char ch = 'a';

    int *pI = &i;
    float *pF = &f;
    char *pCh = &ch;

    printf("i:%d\n", *pI);
    printf("f:%f\n", *pF);
    printf("ch:%c\n", *pCh);

    return 0;
}
