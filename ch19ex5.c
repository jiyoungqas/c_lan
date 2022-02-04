#include <stdio.h>
//3명의 학생에 대한 3과목 점수를 각각 입력받아 배열에 저장한 뒤 학생별 총점과 과목별 총점 출력하기
int main()
{
    int i,j;
    int arr[4][4] = {0};

    //학생별 점수를 입력받기
    for(i=0;i<3;i++){
        printf("%d번째 학생의 국영수 점수를 차례로 입력하세요", i+1);
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //학생별 총점을 arr[i][3]에 지정
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        arr[i][3] += arr[i][j];
        }
    }
    //과목별 총점을 arr[3][j](각 열의 4번째 행)에 저장하기
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            arr[3][j] += arr[i][j];
        }
    }
    //결과 출력하기
    printf("=============================================\n");
    printf("\t국어\t영어\t수학\t총점\n"); //칸 맞추기 위한 \t 사용
    for(i=0;i<4;i++){
        if(i<3) printf("학생%d: ", i+1);
        else printf(" 총점: ");
        for(j=0; j<4;j++){
            printf("\t%4d", arr[i][j]);
        }
        printf("\n");
    }
        return 0;
}
