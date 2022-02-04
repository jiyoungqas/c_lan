//ch27ex3.c
//파일로부터 학생들의 점수를 읽어와 총점과 평균을 다른 파일에 쓰기
#include <stdio.h>
#include <stdlib.h>

struct student_info {
    char name[30];
    int kor;
    int eng;
    int math;
};

int main()
{
    struct student_info st;
    int cnt = 0, total = 0;
    float avg;

    FILE *in_ptr = fopen("file\\input.txt", "r");
    FILE *out_ptr = fopen("file\\output.txt", "w");

    if(in_ptr == NULL || out_ptr == NULL) {
        printf("file open fail");
        exit(1);
    }

    while(1) {
        if(fscanf(in_ptr, "%s %d %d %d", st.name, &st.kor, &st.eng, &st.math) == -1) break;
        cnt++;
        total = st.kor +st.eng + st.math; //총점 구하기
        avg = (float)total / 3;

        //이름, 총점, 평균 쓰기
        fprintf(out_ptr, "%s %d %.2f\n", st.name, total, avg);
    }
    fclose(in_ptr);
    fclose(out_ptr);

    return 0;
}
