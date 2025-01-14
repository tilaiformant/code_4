#include <stdio.h>

int main()
{
    int num;
    printf("請輸入整數值 : ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
        printf("絕對值是 %d\n", num);
    
    getchar();
    return 0;




}