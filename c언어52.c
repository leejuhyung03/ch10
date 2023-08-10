#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,k;
    printf("%d**k<=n \n",2);
    printf("n의 값을 입력하시오: ");
    scanf("%d",&n);
    while(pow(2,k)<=n)
    {
        k++;

    }
    printf("k의 값은:%d \n ",k-1);
    return 0;


}