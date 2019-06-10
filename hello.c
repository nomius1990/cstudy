#include<stdio.h>   /* 引入头文件*/
#define Height 10

int calculate(int Long,int Width); /*函数声明*/

void main()
{
        int m_Long;
        int m_Width;
        int result;

        printf("长方形的高度为22222: %d\n",Height);
        printf("请输入长方形的长度\n");
        scanf("%d",&m_Long);

        printf("请输入长方形的宽度\n");
        scanf("%d",&m_Width);

        result = calculate(m_Long,m_Width);
        printf("长方形的体积是:%d",result);
}

int calculate(int Long,int Width)
{
        int result = Long * Width * Height;
        return result;
}