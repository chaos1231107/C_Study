#include <stdio.h>

void swap(int *pa, int *pb); //두변수의 값을 바꾸는 함수선언

int main(void)
{
    int a = 10, b = 20;
    swap(&a,&b);  //a,b 의 주소를 인수로
    printf("a : %d, b: %d",a, b);
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa; //*를 사용해서 변수의 주소가 가리키는 값 저장
    *pa = *pb;
    *pb = temp;
}