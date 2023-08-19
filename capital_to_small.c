#include <stdio.h>

int main(void)
{
    char small, cap = 'G'; 

    if((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A'); //대, 소문자의 차이을 더해 소문자로 변환
    }

    printf("대문자 : %c %c", cap,'\n');  // '\n'를 %c 로 출력 --> 줄바꿈 
    printf("소문자 : %c", small);
    
    return 0;
}
