#include <stdio.h>
//�� ������ ������ ���嵷 ���� �迭�� ��ý�Ʈ �迭 2���� �����Ѵ�.
//�̶� �ִ� ���� ��⸦ ã�� �ش� ����� ��ý�Ʈ Ƚ�� ����ϱ�
int main()
{
    int i, max, mark; //mark �ִ밪�� ��ġ
    int score[5] = {10, 5, 8, 20, 16}; //���� �迭
    int assist[5] = {7,2,10,15,9}; //��ý�Ʈ �迭

    max = 0; //�ִ밪 0���� �ʱ�ȭ
    for(i=0;i<5;i++){
        if(score[i]>max){
            max = score[i];
            mark = i; // �ִ밪 ��ġ ����
        }
    }
    printf("�ִ� ������ ���:%d ��° �ִ� ����: %d ��ý�Ʈ: %d", mark+1, max, assist[mark]);
    return 0;
}
