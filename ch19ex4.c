#include <stdio.h>
int main()
{
    int i, j, arr[3][4];
    int cnt = 1;
    for(i=0;i<3;i++){
        for(j=0; j<4; j++){
            arr[i][j] = cnt++;
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
