#include<stdio.h>
#define NUM 1

#line 100 "if_else.c"  /*改变指定文件的行号 */
void main()
{
    int i = 0;
    int haha = 0;
    int hehe = 0;

#ifdef NUM   /* 是否被define */
    haha = 50;
#endif

#ifndef HEHE  /* 是否没有被define */
    hehe = 40;
#endif

#if NUM>50
    i++;
#else
    i=30;
#endif

#if NUM==49
    i=31
#elif NUM==48
    i=32
#endif


#if NUM==50
    i += 50;
#endif

#if NUM < 50
    i--;
#endif

    printf("NOW i is %d \n",i);
    printf("NOW haha is %d \n",haha);
    printf("NOW hehe is %d \n",hehe);

#undef NUM  /*删除预先定义的宏 */

#ifdef NUM
    haha = 50;
#endif
    
    printf("NOW haha is %d \n",haha);

    printf("1now line %d \n",__LINE__);
    printf("2now line %d \n",__LINE__); //当前行号
    printf("filename %s \n",__FILE__); //获取当前文件名
    printf("filename createdate %d \n",__DATE__); //当前源文件的日期
    printf("filename createtime %d \n",__TIME__); //当前源文件的时间
    printf("STDC %d \n",__STDC__); //当前编译器是否为标准C 1表示符合 否则不符合



}