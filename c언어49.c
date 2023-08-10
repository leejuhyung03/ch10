#include <stdio.h>

int main(void)
{
    int num1, num2;
    int i, gcd;

    printf("두 정수를 입력: ");
    scanf("%d %d", &num1, &num2);

    for(i=1; i<= num1 && i <= num2; ++i)
    {
        if(num1%i==0 && num2%i==0)
        gcd = i;
    }
    printf("%d 와 %d 의 최대 공약수:%d \n", num1, num2, gcd);
    return 0;
 

}