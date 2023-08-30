#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pi;
    int i, sum = 0;

    pi = (int *) malloc(5*sizeof(int)); //저장공간 20바이트 할당
    if(pi==NULL)
    {
        printf("메모리가 부족합니다");
        exit(1);
    }
    printf("다석명의 나이를 입력하시오 : ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &pi[i]);
        sum += pi[i];
    }

    printf("다섯명의 평균 나이 : %.1lf\n", (sum / 5.0));
    free(pi);

    return 0;
}