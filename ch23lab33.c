#include <stdio.h>
struct time{
int h;
int m;
int s;
};
int main()
{
    struct time st, et, diff;

    printf("시작 시간(시 분 초): ");
    scanf("%d %d %d", &st.h, &st.m, &st.s);

    printf("종료 시간(시 분 초)");
    scanf("%d %d %d", &et.h, &et.m, &et.s);

    if(et.s < st.s){
        et.m --;
        et.s+=60;
    }
    if(et.m < st.m){
        et.h --;
        et.m+=60;
    }
    diff.s = et.s - st.s;
    diff.m = et.m - st.m;
    diff.h = et.h - st.h;
    printf("시간 차이: %2d:%2d:%2d", diff.h, diff.m, diff.s);
}
