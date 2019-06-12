#include<stdio.h>

/*
    文件指针是一个指向文件有关信息的指针,这些信息包括文件名,状态和当前位置,它们保存在一个接头体变量中.
    在使用文件时需要在内存为其分配空间,用来存放文件的基本信息,该结构体类型是由系统定义的,c语言规定该类型
    为FILE类型.其声明如下
    
    typedef struct
    {
        short level;
        unsigned flags;
        char fd;
        unsigned char hold;
        short bsize;
        unsigned char *buffer;
        unsigned ar *curp;
        unsigned istemp;
        short token;
    }

    fgetc(fp)   //获取单个字符
    fputc(str,fp)  //将 指定单个字符写入文件
    fputs(str,fp) //将 指定字符串写入到文件
    fgets(str,size,fp) //从文件中获取指定字符串大小的字符串
    fprintf(fp,"%c",i)  //将i 以字符串写入文件
    fscanf(fp,"%c",&i)  //从文件中读取单个字符给i

    fread(buffer,size,count,fp) //该函数的作用是从fp 所指的文件中读入count次每次读入size大小 将读入的信息存储在buffer中
    fwrite(buffer,size,count,fp) //和上面一样 只是将读换成写了而已
    fseek(fp,offset,pos) //移动指针位置

    rewind(fp) //将指针重新返回文件的开头

    ftell(fp) //获取到当前位置
 */

void main()
{
    char ch;
    FILE *fp;
    char filename[10] = "test.txt";
    fp = fopen(filename,"w");
    ch = fputc('3',fp);  //放入一个字符 
    fclose(fp);

}