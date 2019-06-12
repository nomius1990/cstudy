#include <stdio.h>  // 一般包含核心的
#include "my.h" //双引号的话 一般是引进自己写的文件

void main()
{
    printf("%.3f \n",PI);   //在另外一个文件
    printf("%d \n",ADD(3,4));
}