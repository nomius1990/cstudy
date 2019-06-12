#include<stdio.h>
/*
    共用体很像结构体,只不过关键字由struct 变成了 union.
    共用体和结构体的区别在于,结构体定义了一个由多个数据成员组成的特殊类型,
    而且共用体定义了一块为所有数据成员共享的内存(请看下面范例)
    我在质疑共用体的作用
 */

union DataUnion
{
    int iInt;
    char cChar;
};

void main()
{
    union DataUnion u1;
    u1.iInt = 97;
    printf("%d \n",u1.iInt);  //97
    printf("%c \n",u1.cChar); //a

    u1.cChar = 'A';
    printf("%d \n",u1.iInt);  //65
    printf("%c \n",u1.cChar); //A

}