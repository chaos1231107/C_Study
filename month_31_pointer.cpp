#include <stdio.h>

int find_month(int *ary);
void change_29(int *ary_day);


int main(void)
{
    int temp1;
    //int cnt;

    int month[12] = {31, 28, 31, 30, 31, 30,31,31,30,31,30,31};
    // �Լ� ȣ��
    temp1 = find_month(month);
    change_29(month);
    printf("\n");
    printf("31���� ���� ������ %d��", temp1);
    return 0;

}

int find_month(int *ary)
{
    int cnt;
    for(int i = 0; i < 12; i++)
    {
        if(*(ary+i) == 31)  cnt++; // i��° �迭 ��Ұ� 31�̸� cnt 1�� ����
    }

    return cnt; // cnt ��ȯ
}

void change_29(int *ary_day)
{
    *(ary_day+1) = 29; //�迭�� ù��° ��Ұ��� 29�� ����
    for(int i = 0; i < 12; i++)
    {
        printf("%5d", *(ary_day+i)); // �迭��� ���
    }
}