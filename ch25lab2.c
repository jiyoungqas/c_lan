#include <stdio.h>
#include <string.h>
int main()
{
    int arr[5] = {10,20,30,40,50};

    printf("plus_one È£Ãâ µÚ\n");

    plus_one(arr);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
          }

}
void plus_one(int arr[])
{
    for(int i=0;i<5;i++){
        arr[i] = arr[i] +1;
    }
}
