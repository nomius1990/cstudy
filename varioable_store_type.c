#include<stdio.h>

void AutoAddOne(int times);
void StaticAddOne(int times);

void main()
{
    AutoAddOne(1);
    AutoAddOne(2);
    StaticAddOne(1);
    StaticAddOne(2);
    StaticAddOne(3);
    StaticAddOne(4);
    StaticAddOne(5);
}

void AutoAddOne(int times) /*auto 变量  每次变量的值会被重置*/
{
    auto int test = 1; /*看来这个 auto 可以不加*/
    test+=1;
    printf("the auto %d call is %d \n",times,test);
}

void StaticAddOne(int times) /*static 变量 每次变量的值保留上一次的值 */
{
    static int test = 1; /*再次调用不会会使用上一次的值*/
    test+=1;
    printf("the static %d call is %d \n",times,test);
}