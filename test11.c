#include <stdio.h>

int main()
{
    char grade;

    printf("請輸入成績等級(A,B,C,D,F) : ");
    scanf("%c",&grade);
    printf("\n");

    switch ( grade )
    {
        case 'a':
        case 'A':
            printf("你是優等生 \n");
            break;
        case 'b':
        case 'B':
            printf("你是好等生 \n");
            break;
        case 'c':
        case 'C':
            printf("你是中等生 \n");
            break;
        case 'd':
        case 'D':
            printf("成績通過,但請加油 \n");
            break;
        case 'f':
        case 'F':
            printf("不及格 \n");
            break;
        default:
            printf("請輸入正確的英文字 \n");
        
    }


    getchar();
    return 0;




}