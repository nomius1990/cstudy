#include<stdio.h>
#include<string.h>

void SingleArray();
void DoubleArray();

void main()
{
//    SingleArray();
   DoubleArray();

}

/* 一维数组初始化 */
void SingleArray()
{
     int arrinit[5] = {1,2,3,4,5},arruninit[5],i,arr[]={4,5,6,7};
    
    for (i = 0; i < 5; i++)
    {
        arruninit[i] = i;
        printf("the arr key is %d ,value %d \n",i,arrinit[i]);
        printf("the arruninit key is %d ,value %d\n",i,arruninit[i]);
    }
    
    char* arrchar[2]; //字符串一维数组 这里一定要用指针类型 要不然会出错
    arrchar[0] = "Hello";
    arrchar[1] = "World";

    printf("%s %s\n",arrchar[0],arrchar[1]);

}

//二维数组初始化
void DoubleArray()
{
    int arr[2][2] = {1,2,3,3};  /* 将所有的数据写在一个大括号里面,按照数组元素排序对元素赋值 ,如果大括号内的数据少于数组元素的个数,则系统默认后面没被赋值的元素为0*/
    
    if(arr[1][0] >= 3 )
    {
        puts("i am bigger than 2\n");
    }else{
        puts("i am smaller than  3\n");
    }

    //字符数组初始化
    char arr1[5] = {'h','e','l','l','o'}; //每个字符串要用单引号包裹
    char arr2[] = {'h','e','l','l','o'}; //初始化的时候可以不指定长度
    char arr3[] = {"hello"};  //方式3
    char arr4[] = "hello";  //方式4
    char *str1="e";
    char *str2="B"; 
    int i = 0;
    if(strcmp(str1,str2)){
        printf("A == B \n");
    }else{
        printf("A != B \n");
    }

    if(str1 == "A"){
        printf("I am A \n");
    }

    //
    while(i < 5){
        printf("%c",arr1[i++]); //这里需要用%c
    }
    
    i = 0;
    while(i < 5){
        printf("%c",arr2[i++]); //这里需要用%c
    }

    i = 0;
    while(i < 5){
        printf("%c",arr3[i++]); //这里需要用%c
    }

    i = 0;
    while(i < 5){
        printf("%c",arr4[i++]); //这里需要用%c
    }

    printf("%s",arr3);  
    printf("%s",arr4);  

}