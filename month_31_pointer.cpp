#include <stdio.h>

int find_month(int *ary, int size1); // �迭�� ���̸� ���ϰ��� size �Ű����� ���
void change_29(int *ary_day, int size2);

int main(void)
{
    int temp1;
    int month[12] = {31, 28, 31, 30, 31, 30,31,31,30,31,30,31};
    int size = sizeof(month) / sizeof(*month); //�迭�� ����
    // �Լ� ȣ��
    temp1 = find_month(month,size);
    change_29(month,size);
    printf("\n");
    printf("31���� ���� ������ %d��", temp1);
    return 0;

}

int find_month(int *ary, int size1)
{
    int cnt;
    for(int i = 0; i < size1; i++)
    {
        if(*(ary+i) == 31)  cnt++; // i��° �迭 ��Ұ� 31�̸� cnt 1�� ����
    }

    return cnt; // cnt ��ȯ
}

void change_29(int *ary_day,int size2)
{
    *(ary_day+1) = 29; //�迭�� ù��° ��Ұ��� 29�� ����
    for(int i = 0; i < size2; i++)
    {
        printf("%5d", *(ary_day+i)); // �迭��� ���
    }
}