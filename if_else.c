#include<stdio.h>
#define NUM 1

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
}