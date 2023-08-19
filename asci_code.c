#include <stdio.h>

int main(void)
{
    char space,enter,tab;
    scanf("%c%c%c",&space, &enter, &tab);
    printf("스패이스 키의 아스키 코드값 : %d\n", space);
    printf("탭 키의 아스키 코드값 : %d\n",tab);
    printf("엔터 키의 아스키 코드값 : %d\n", enter);

    return 0;
}