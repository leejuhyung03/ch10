#include <stdio.h>

int main(void)
{
    int sec;
    printf("초를 입력하시오: ");
    scanf("%d", &sec);
    printf("h:%d, m:%d ,s:%d ",sec/3600,(sec%3600)/60,((sec%3600)%60));
    return 0;
}