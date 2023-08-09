#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};

    //배열의 크기 = 포인터의 크기 / 0번째 배열요소의 크기
    // *ary1 ==>  배열의 0번째 요소를 의미

    print_ary(ary1, sizeof(ary1) / sizeof(*ary1));
    printf("\n");
    print_ary(ary2, sizeof(ary2) / sizeof(*ary2));
}


void print_ary(int *pa, int size)
{
    for(int i; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
}
