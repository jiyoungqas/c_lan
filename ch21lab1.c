#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    for(int i=0;i<5;i++){
        *ptr += 1; //ptr�� ����Ű�� ���� 1 ����
        printf("%d ", *ptr);
        ptr++; //ptr �� ���� �ּ� ���� ����Ű����
        }
    return 0;
}
