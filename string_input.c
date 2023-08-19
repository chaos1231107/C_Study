#include <stdio.h>

int main(void)
{
    int ch;
    printf("문자입력 : ");
    scanf("%c", &ch);
    printf("\n");
    printf("%c의 아스키 코드값 : %d",ch,ch);
}