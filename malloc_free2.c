#include <stdio.h>
#include <stdlib.h>
//malloc 함수는 (void*)형을 반환하므로 용도에 맞게 형변환 해야 한다
int main(void)
{
    int *pi;    //동적 할당 포인터 선언
    double *pd;

    pi = (int *)malloc(sizeof(int));
    if(pi == NULL)
    {
        printf("#으로 메오리가 부족합니다");  //동적할당 실패시 NULL포인터 연함
        exit(1);
    }
    pd = (double *)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("정수형으료 사용 : %d\n", *pi);
    printf("실수형으로 사용 : %lf\n", *pd);

    free(pi);
    free(pd);

    return 0;
}