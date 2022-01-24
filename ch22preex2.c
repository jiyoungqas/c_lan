#include <stdio.h>
int main()
{
    int i;
    char *subject[] = {"English", "Math", "History", "Science"};

    for(i=0;i<4;i++) {
        printf("%s\n", subject[i]);
    }
    return 0;
}
