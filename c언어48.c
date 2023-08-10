#include <stdio.h>

int main(void)
{
    int num1, num2;
    int dan;
    printf("자연수를 두개 입력 하시오: ");
    scanf("%d %d", &num1, &num2);

    while(num1<=num2)
    {
        dan=1;
        while(dan<10)
        {
            printf("%d*%d=%d \n",num1, dan, num1*dan);
            dan++;
        }
        num1++;
    }

    while(num2<=num1)
    {
        dan=1;
        while(dan<10)
        {
            printf("%d*%d=%d \n",num2, dan, num2*dan);
            dan++;
        }
        num2++;
    }
   

    return 0;





 
   
}