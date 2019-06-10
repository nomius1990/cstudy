#include<stdio.h>

void funcPrint();
void main()
{
    funcPrint();
    // 向设备输出一个字符 没有换行符
    putchar('A');
    putchar('9');
    putchar('\101');

    puts("enter a symbol\n");
    putchar(getchar());  //getchar 输入一个字符
    puts("\n");
    puts("now what you enter,then i show it\n"); //向屏幕输出一串字符
    char chartest[10];
    puts(gets(chartest));


    /*
        i,d 10进制
        o 八进制
        x,X 十六进制
        u 无符号输出整形
        c 输出字符串
        s 输出字符串
        f 小数类型
        e,E 指数类型
     */
    printf("format outpue %d",10);

}

void funcPrint()
{
    long int longtest = 1000;
    printf("the long is %ld \n",longtest);

    char input_char[10];  //必须指定字符串的长度
    scanf("%s",&input_char);
    printf("You entered %s",input_char);

    printf("THE STRING IS %s\n",input_char);
    printf("THE STRING IS %10s\n",input_char);
    printf("THE STRING IS %-10s\n",input_char);
    printf("THE STRING IS %10.3s\n",input_char); //截取长度
    printf("THE STRING IS %-10.3s\n",input_char);
}