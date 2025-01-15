#include <stdio.h>

int main()
{
    int sc;
    printf("請輸入分數 : ");
    scanf("%d", &sc);
    if (sc >= 90)
        printf(" a \n");
    else if (sc >= 80)
        printf(" b \n");
    else if (sc >= 70)
        printf(" c \n");
    else if (sc >= 60)
        printf(" d \n");
    else
        printf(" f \n");
    
    getchar();
    return 0;




}