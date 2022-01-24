//배열 표기법, 포인터 표기법 사용해보기
#include <stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr; //ptr = &arr[0];

  printf("arr[0]: %d, %d\n", arr[0], *(arr+0));

    printf("arr[1]: %d, %d\n", arr[2], *(arr+1));
    printf("arr[2]: %d, %d\n", arr[3], *(arr+2));
    printf("arr[3]: %d, %d\n", arr[4], *(arr+3));
    printf("arr[4]: %d, %d\n", arr[5], *(arr+4));

    for(int i=0;i<5;i++){
        printf("arr[%d]: %d, %d\n", i, arr[i], *(arr+i));

    }

    return 0;
}
