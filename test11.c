#include <stdio.h>

int main()
{
    int a,b,c;

    printf("請輸入任意 2 數字 ==> ");
    scanf("%d%d", &a,&b);
    c = ( a > b ) ? a : b;
    printf("較大值是 %d \n",c);
    getchar();
    return 0;




}