#include<stdio.h>
#include<string.h>

struct Student
{
    char sName[20];
    struct Student* pNext;
};


void main()
{
    
    struct Student s1,s2={"wangmazi"},s3={"lisi"},s4={"aa",NULL};

    //STET 1
    strcpy(s1.sName,"zhangsan");
    s1.pNext = NULL;
    //STEP 2
    s1.pNext = &s2;
    s1 = s3;

    printf("the value is %");



    // s2.pNext = &s3;
    // s3.pNext = &s4;
    // struct Student* sTemp;
    // sTemp = &s1;

    // do{
    //     printf("the name is %s\n",sTemp->sName);
    //     sTemp = sTemp->pNext;
    // }while(sTemp->pNext != NULL);
    




}