#include<stdio.h>
#include<stdlib.h>


// 定义链表类型
struct Student
{
    char cName[20];
    int iNumber;
    struct Student* pNext;
};

int iCount; //全局变量 链表的个数
//定义创建函数
struct Student* Create()
{
    struct Student *pHead=NULL;
    struct Student *pEnd;
    struct Student *pNew;
    iCount = 0;
    pNew = pEnd = (struct Student*)malloc(sizeof(struct Student));


    printf("Please enter the name,then the number \n");
    scanf("%s",&pNew->cName);
    scanf("%d",&pNew->iNumber);

    
    while (pNew->iNumber!=0)
    {
        iCount++;
        if(iCount == 1)
        {
            pNew->pNext = NULL;
            pEnd = pNew;
            pHead = pNew;
        }
        else
        {
            pNew->pNext = NULL; 
            pEnd->pNext = pNew; //原来的尾节点指向新节点 这里是内存地址进行覆盖
            pEnd = pNew; // 覆盖
        }
        
        pNew = (struct Student*)malloc(sizeof(struct Student));
        scanf("%s",&pNew->cName);
        scanf("%d",&pNew->iNumber);
    }
    
    free(pNew);
    return pHead;
}


/*在头部插入节点 */
struct Student* InsertAtHead(struct Student* pHead)
{
    struct Student *pNew;
    pNew =  (struct Student*)malloc(sizeof(struct Student));

    printf("Please enter the name,then the number \n");
    scanf("%s",&pNew->cName);
    scanf("%d",&pNew->iNumber);

    pNew->pNext = pHead;
    iCount++;
    return pNew;

}


void Print(struct Student* pHead)
{
    struct Student* pTemp;
    int iIndex = 1;
    printf("---the list has %d member----\n",iCount);
    printf("\n");
    pTemp = pHead;

    while (pTemp!=NULL)
    {
        printf("THE NO %d member is :\n",iIndex++);
        printf("THE NAME IS:%s \n",pTemp->cName);
        printf("THE number IS:%d \n",pTemp->iNumber);
        printf("\n");
        pTemp = pTemp->pNext;
    }
    
}

//malloc() //动态分配内存 然后返回一个指针

int main()
{
    struct Student* pHead;
    pHead = InsertAtHead(Create());
    Print(pHead);
}