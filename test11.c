#include <stdio.h>

int main()
{
    int age;
    printf("請輸入年齡 : ");
    scanf("%d", &age);
    if (age < 20)
    {
        printf("你年齡太小\n");
        printf("必年滿20歲才可以購買菸酒\n");
    
    }
    getchar();
    return 0;




}