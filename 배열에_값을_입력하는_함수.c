#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
    double ary[5];
    double cnt;
    double max;
    cnt = sizeof(ary) / sizeof(*ary);

    input_ary(ary,cnt);
    max = find_max(ary,cnt);

    printf("�迭�� �ִ밪 : %.1lf", max);

    return 0;
}

void input_ary(double *pa, int size)
{
    printf("%d���� �Ǽ��� �Է��Ͻÿ� : ", size);
    for(int i; i < size; i++)
    {
        scanf("%lf", pa+i);
    }
}

double find_max(double *pa, int size)
{
    double max;
    max = *pa;

    for(int i = 0; i < size; i++)
    {
        if(*(pa + i) > max) max = *(pa + i);
    }

    return max;
}