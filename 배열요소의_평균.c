#include <stdio.h>

int main(void)
{
    double ary[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
    double *pa = ary;
    double avg;
    double sum = 0;
    double cnt;
    cnt = sizeof(ary) / sizeof(*ary);

    printf("배열 요소의 값 : ");
    for(int i = 0; i < 5; i++)
    {
        sum += *pa;
        avg = sum / cnt;
        printf("%5.1lf", *pa);
        pa++;
    }
    printf("\n평균 : %.2lf\n", avg);
}
