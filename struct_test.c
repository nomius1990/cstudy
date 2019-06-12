#include<stdio.h>
#include<string.h>

struct date
{
    int year;
    int month;
    int day;
};

struct student
{
    char sname[10];
    int age;
    int sex;
    struct date birthday;
} student1,student2={"zhangsan",18,2},students[10];



/*
    结构体是一种构造类型,他是由若干"成员"组成的,其中的每个成员可以是一个基本数据类型又或者是一个构造类型
 */

void main()
{
    student1.age = 10;
    student1.sex = 1;
    student1.birthday.day = 22;
    student1.birthday.year = 1990;
    student1.birthday.month = 8;
    strcpy(student1.sname,"wangmazi");
    // scanf("%s",student1.sname);
    printf("the name is %s \n",student1.sname);

    //给字符串赋值  标准C中没有字符串变量这一说法，其存储字符串是用字符数组
    char sname[30];
    strcpy(sname,"zhangsan");
    printf("the value is %s \n",sname);

    //指向结构体的指针
    struct student* pStudent;
    pStudent = &student1;
    printf("the First way value is %s \n",student1.sname);
    printf("the Second way value is %s \n",(*pStudent).sname);
    printf("the Third way value is %s \n",pStudent->sname);

    struct  student* pStudents;
    pStudents = students;  // 这里指针指向的是结构体数组元素的首地址
    pStudents = &students[0];
}