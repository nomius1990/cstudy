#include<stdio.h>
#define ARR_LEN 10
void selectionMethod(int arr[]); //选择法排序  -- 依次将最小的值放在
void bubbleMethod(int arr[]);    //冒泡排序   --  依次比较数组中相邻的两个数组元素的值，将较小的数排到较大的数目前面（依次挪动）
void Celerity(int left,int right,int array[]);  //快速排序   -- 选一个值 小的放左边 大的放右边 ，然后递归。。。 
int getArrLen(int arr[]);
void printArr(int arr[]);                                
void main()
{
    int arr[] = {25,78,11,5,43,6,9,55,44,44};
    // selectionMethod(arr);
    // bubbleMethod(arr);
    printArr(arr);
    Celerity(0,9,arr);
}

/*
  选择法排序 依次将第一位，第二位换成最小的值
  言简意赅 ： 就是选择将第一个位置置为最小的，然后第二个位置剩下的最小的。。。 分别用第一位 ，第二位 和 符合条件的进行交换
 */
void selectionMethod(int arr[])
{
    printArr(arr);
    int i,j,nowminvalue,currentSub;
    for(i = 0 ; i<ARR_LEN ;i++)
    {   
        currentSub = i;
        //获取剩下最小的值 然后进行互换
        nowminvalue = arr[i];
        for(j=i+1;j<ARR_LEN;j++){
            if(arr[j] < nowminvalue)
            {
                nowminvalue = arr[j];
                currentSub = j;
            }

        }
        arr[currentSub] = arr[i];
        arr[i] = nowminvalue;
        printArr(arr);
    }

}

/* 冒泡排序就是 每次比较相邻的两个元素 将小的数放在前面 大的放后面， 结果就是最大的会被挪动到最后面 
   这个是相邻的两个元素之间进行交换
*/
void bubbleMethod(int arr[])
{
    int i,j,temp;
    printArr(arr);
    for( i = 0; i < ARR_LEN; i++)
    {
        for (j = 0;j < ARR_LEN - i - 1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
        printArr(arr);
    }
    
}


void Celerity(int left,int right,int array[])
{
    
    // {25,78,11,5,43,6,9,55,44,44};  43
    int i = left,j = right,middle,iTemp;
    middle = array[(left + right) / 2];
    do
    {
        while ((array[i] < middle) && (i<right)) i++;
        while ((array[j] > middle) && (j>left)) j--;
        if(i<=j){
            iTemp = array[i];
            array[i] = array[j];
            array[j] = iTemp;
            i++;
            j--;
        }
    }while(i<=j);
    
    if(left<j) Celerity(left,j,array);
    if(right>i) Celerity(i,right,array);

}   


void printArr(int arr[])
{
    int i = 0;
    printf("[");
    while (i < ARR_LEN)
    {
        printf("%d,",arr[i++]);

    }
    printf("]\n");
}