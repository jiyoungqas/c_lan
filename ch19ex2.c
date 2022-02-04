//strcat()함수 사용해 보기
#include <stdio.h>
#include <string.h>

int main()
{
 /*   char str1[50] = "안녕하세요";
    char str2[50] = "반가워요~";

    strcat(str1, str2);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
   */
   //20글자 이내의 문자열 입력받기 위한 배열
   char str1[21], str2[21];

   puts("첫 번째 문자열 입력");
   gets(str1);

   puts("두 번째 문자열 입력");
   gets(str2);

   if (strcmp(str1, str2) == 0){
        printf("두 문자열은 동일합니다");
   }
   else if(strcmp (str1, str2) < 0){
        printf("첫번째 문자열이 사전 검색순으로 앞이네요");
   }
   else{
        printf("두 번째 문자열이 사전 검색순으로 앞이네요");
   }
    return 0;
}
