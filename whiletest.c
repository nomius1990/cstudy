#include<stdio.h>

void main()
{
    //do while
    // int i = 1;
    // do{
    //     printf("just 1 time");
    // }while(i>2);

    /*goto test */

    puts("Please enter 1 or 2 or 3 \n");
    char input_char;
    input_char = getchar();
    switch (input_char)
    {
    case '1':
        printf("1");
        break;
    case '2':
        goto nihao;

    case '3':
        printf("3");
    
    default:
        break;

    nihao: //给goto 使用的  其他的还有break  continue 和其它的都是一样的了
        printf("i am go to out");
    }
    

}