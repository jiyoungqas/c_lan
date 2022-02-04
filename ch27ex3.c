//ch27ex3.c
//���Ϸκ��� �л����� ������ �о�� ������ ����� �ٸ� ���Ͽ� ����
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
        total = st.kor +st.eng + st.math; //���� ���ϱ�
        avg = (float)total / 3;

        //�̸�, ����, ��� ����
        fprintf(out_ptr, "%s %d %.2f\n", st.name, total, avg);
    }
    fclose(in_ptr);
    fclose(out_ptr);

    return 0;
}
