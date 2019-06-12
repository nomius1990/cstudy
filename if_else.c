#include<stdio.h>
#define NUM 1

void main()
{
    int i = 0;
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
}