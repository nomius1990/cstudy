#include<stdio.h>
#include<string.h>


void test(char* str);
void main()
{
    // char str1[30],str2[30];
    // printf("Please des enter str\n");
    // gets(str1);
    // printf("Please enter source  str\n");
    // gets(str2);

    // printf("output des str\n");
    // puts(str1);
    // printf("output source str\n");
    // puts(str2);

    // strcpy(str1,str2); //将 str2 的值赋值给 str1

    // printf("after cpy\n");
    // puts(str1);

    // char str3[30]="Hello",str4[30] = "world";

    // strcat(str3,str4);  //将 str2 的值拼接到str1 后面

    // puts(str3);
    // puts(str4);

    // char str5[30] = "Hello",str6[30] = "World"; // 1=2 返回0  1>2 返回1 1<2 返回 -1
    // // int result = strcmp(str5,str6);  
    // // printf("%d",result);
    // // strupr(str5); //转换成大写
    // // strlwr(str6); //转换成小写
    // strlen(str5);//获取字符串长度
    // puts(str5);
    // puts(str6);

    char str[30] = "wait for change"; 
    puts(str);
    test(str); //传进去的值要被覆盖掉
    puts(str);

}

void test(char* strtest) //需要指针类型
{
    char str2[30] = "nimeia";

    strcat(strtest,str2);
}