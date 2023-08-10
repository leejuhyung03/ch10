#include <stdio.h>

int main(void)
{
    int num;
    printf("가지고 있는돈%d원 \n", 3500);
    printf("크림빵:%d원, 새우깡:%d원, 콜리:%d원 \n",500,700,400);
    printf("어떻게 구매 하시겠습니까?\n");
    printf("%d번:크림빵%d개,새우깡%d개,콜라%d개 \n",1,1,2,4);
    printf("%d번:크림빵%d개,새우깡%d개,콜라%d개 \n",2,2,3,1);
    printf("%d번:크림빵%d개,새우깡%d개,콜라%d개 \n",3,4,1,2);
    scanf("%d", &num);

    if(num==1)
    {
        printf("크림빵%d개,새우깡%d개,콜라%d개를 구매 하셨습니다!\n",1,2,4);
    }
    if(num==2)
    {
        printf("크림빵%d개,새우깡%d개,콜라%d개를 구매 하셨습니다!\n",2,3,1);
    }
    if(num==3)
    {
        printf("크림빵%d개,새우깡%d개,콜라%d개를 구매 하셨습니다!\n",4,1,2);
    }
    return 0;

}