#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for(int i=0;i<5;i++){
        *ptr += 1; //ptr이 가르키는 값을 1 증가
        printf("%d ", *ptr);
        ptr++; //ptr 이 다음 주소 값을 가르키도록
        }
    return 0;
}
