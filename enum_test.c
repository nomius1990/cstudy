#include<stdio.h>

enum Color{RED = 1,BLUE,GREEN} c;
void main()
{   
    int ic;
    scanf("%d",&ic);
    switch (ic)
    {
    case RED:
        printf("I AM RED YOU CAN THINK I AM 1 \n");
        break;
    case BLUE:
        printf("I AM blue YOU CAN THINK I AM 2 \n");
        break;
    case GREEN:
        printf("I AM green YOU CAN THINK I AM 3 \n");
        break;
    default:
        break;
    }
}