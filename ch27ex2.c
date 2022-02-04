/* ch27ex2.c
텍스트 화일을 읽기모드로 열어 문자데이터 읽기 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char buf[50];
    FILE *fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("file open fail");
        exit(1);
    }

    while(fgets(buf, sizeof(buf), fp) != NULL) { //더 이상 읽어올 게 없다면 끝내기
        printf("%s", buf);
    }
    fclose(fp);

    return 0;
}
