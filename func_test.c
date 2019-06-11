#include<stdio.h>

//下全面这两种方式都是都可以直接覆盖原数组的值
void arrTest(int* arr);
void arrTestTwo(int arr[]); 
static int Add(int num1,int num2); //内部函数 只能在文件内部访问调用
void main(int argc,char* argv[]) //第一个是参数个数  第二个是参数值
{

    printf("%s \n",argv[0]);
    int a[] = {1,2,3,4,5};
    arrTest(a);
    arrTestTwo(a);
    printf("%d %d",a[3],a[4]);  // 6 7

    int c = 1,d = 2;
    printf("%d",Add(c,d));

}

void arrTest(int* arr)
{
    arr[3] = 6;
}

void arrTestTwo(int arr[])
{
    arr[4] = 7;
}

static int Add(int num1,int num2)
{
    return num1 + num2;
}