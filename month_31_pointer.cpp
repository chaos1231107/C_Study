#include <stdio.h>

int find_month(int *ary);
void change_29(int *ary_day);


int main(void)
{
    int temp1;
    //int cnt;

    int month[12] = {31, 28, 31, 30, 31, 30,31,31,30,31,30,31};
    // 함수 호출
    temp1 = find_month(month);
    change_29(month);
    printf("\n");
    printf("31일인 월의 개수는 %d개", temp1);
    return 0;

}

int find_month(int *ary)
{
    int cnt;
    for(int i = 0; i < 12; i++)
    {
        if(*(ary+i) == 31)  cnt++; // i번째 배열 요소가 31이면 cnt 1씩 증가
    }

    return cnt; // cnt 반환
}

void change_29(int *ary_day)
{
    *(ary_day+1) = 29; //배열의 첫번째 요소값을 29로 갱신
    for(int i = 0; i < 12; i++)
    {
        printf("%5d", *(ary_day+i)); // 배열요소 출력
    }
}