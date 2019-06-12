#include<stdio.h>
/*
    认真学习
    1 掌握指针的相关概念
    2 掌握指针和数组之间的关系
    3 掌握指向指针的指针
    4 掌握如何使用指针变量坐函数参数
    5 了解main 函数的参数
 */

void towArr()
{
    int a[3][5],i,j;
    int *p;

    printf("Please enter a \n");
    for(i=0;i<3;i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]); //way 1  这个通过取地函数
            // scanf("%d",a[i]+j); //way2  这种相当于是直接内存来的
            // scanf("%d",p++); //way 1  这个通过取地函数
        }
        
    }

    

    printf("output a \n");
    for(i=0;i<3;i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%5d",*(a[i]+j));
        }
        printf("\n");
    }

}

void strTest()
{
    char *str = "Hello world"; //这里并不是把"Hello world" 中的所有字符串放到str 中,只是把该字符串中第一个字符的地址赋值给指针变量str.
    printf("%s",str);

    char str1[]="you are beautifual",str2[30],*p1,*p2;
    p1 = str1;
    p2 = str2;

    while (*p1!='\0') //这个就相当于字符串遍历 然后赋值 \0 代表结束符
    {
        *p2 = *p1; //相当于指针移动赋值
        p1++;
        p2++;
    }
    *p2='\0';

    printf("Now the string 2 is :\n");
    puts(str2);
    

    //字符串数组 
    //字符数组是一个一维数组 字符串数组是以字符串作为数组元素的数组,可以看成是一个二维字符数组
    //指针数组
    int i;
    char *country[]={"china","america","italy","japan","gearman","france"};
    for (i = 0; i < 5; i++)
    {
        printf("%s \n",country[i]);
    }
    

    //指向指针的指针
    char **p;
    printf("******************\n");
    for (i = 0; i < 5; i++)
    {
        p = country + i;
        printf("%s \n",*p);
    }
    



}


int main()
{
    // towArr();
    strTest();
    return 1;
    // int a,b;
    // int *p1,*p2,*p3,*p4;
    // scanf("%d,%d",&a,&b);
    // p1 = &a;  //p1 = 100024  不能将一个数字赋给指针这是错误的
    // p2 = &b;
    // p3 = p1;
    // p4 = p2;
    
    // //下面两组输出的值是一样的
    // printf("the number is :%d,%d \n",p1,p2); //打印出来的是内存地址
    // printf("the number is :%d,%d \n",*p1,*p2); //打印出来的是输入的值

    // printf("the number is :%d,%d \n",p3,p4); //打印出来的是内存地址
    // printf("the number is :%d,%d \n",*p3,*p4); //打印出来的是输入的值

    //* 是单目运算符,叫做指针云算符,作用是返回指定的地址内的变量的值  
    //& 取址运算符 返回内存地址
    // int *p,q,k;
    // p = &q; //  &取址云算符 相当于将q 的内存地址 赋给p
    // printf("enter...\n");
    // scanf("%d",p); //这里要传递指针地址
    // printf("the number is \n");
    // printf("q  %d \n",q);

    // long i;
    // long *p;
    // printf("input the number");
    // scanf("%ld",&i);
    // p = &i;
    // printf("the result1 is %ld \n",&*p); //返回内存地址
    // printf("the result-i is %ld \n",i); //返回输入的值
    // printf("the result2 is %ld \n",&i); //返回内存地址

    int *q,b[5],i; //相当于这里 b 指向的是 数组的地址
    printf("please enter b \n");
    for(i = 0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    // q= &b;  //这样写要报错 其实和下面的写法是一样的

    // printf("%5d",*(q++));
    // printf("%5d",*(q++));
    // printf("%5d",*(q++));
    // printf("%5d",*(q++));
    // printf("%5d",*(q++));


    q = b; //代表叫数组首地址赋给变量  b 是数组名,也就是数组的首地址
    // q = &b[0];  //这是另外一种方式  b[0] 的地址就是数组的首地址
    printf(" b array value is \b");
    for(i = 0;i<5;i++)
    {
        printf("%5d",*(q+i));
        printf("%5d",*(b+i));
    }
    printf("\n");
    






}