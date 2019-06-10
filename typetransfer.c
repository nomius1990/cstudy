#include<stdio.h>

void main()
{
    /* 强制类型转换 */
    char char1;
    short int shortint1;
    int int1;
    float float1 = 70000;

    char1 = (char)float1;
    shortint1 = (short)float1;
    int1 = (int)float1;

    printf("the char is %c \n",char1);
    printf("the int is %d \n",int1);
    printf("the short is %ld \n",shortint1);
    printf("the float is %f \n",float1);
}