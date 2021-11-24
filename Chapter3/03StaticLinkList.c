#include "string.h"
#include "ctype.h"      

#include "stdio.h"    
#include "stdlib.h"   

#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 1000 /* 存储空间初始分配量 */

typedef int Status;           /* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef char ElemType;        /* ElemType类型根据实际情况而定，这里假设为char */


Status visit(ElemType c)
{
    printf("%c ",c);
    return OK;
}

/* 线性表的静态链表存储结构 */
typedef struct 
{
    ElemType data;
    int cur;  /* 游标(Cursor) ，为0时表示无指向 */
} Component,StaticLinkList[MAXSIZE];


/* 将一维数组space中各分量链成一个备用链表，space[0].cur为头指针，"0"表示空指针 */
Status InitList(StaticLinkList space) 
{
	
}


/* 若备用空间链表非空，则返回分配的结点下标，否则返回0 */
int Malloc_SSL(StaticLinkList space) 
{ 
	
}


/*  将下标为k的空闲结点回收到备用链表 */
void Free_SSL(StaticLinkList space, int k) 
{  
                 /* 把要删除的分量下标赋值给第一个元素的cur */
}

/* 初始条件：静态链表L已存在。操作结果：返回L中数据元素个数 */
int ListLength(StaticLinkList L)
{
   
}

/*  在L中第i个元素之前插入新的数据元素e   */
Status ListInsert(StaticLinkList L, int i, ElemType e)   
{  
     
}

/*  删除在L中第i个数据元素   */
Status ListDelete(StaticLinkList L, int i)   
{ 
   
} 

Status ListTraverse(StaticLinkList L)
{
   
}


int main()
{
    StaticLinkList L;
    Status i;
    i=InitList(L);
    printf("初始化L后：L.length=%d\n",ListLength(L));

    i=ListInsert(L,1,'F');
    i=ListInsert(L,1,'E');
    i=ListInsert(L,1,'D');
    i=ListInsert(L,1,'B');
    i=ListInsert(L,1,'A');

    printf("\n在L的表头依次插入FEDBA后：\nL.data=");
    ListTraverse(L); 

    i=ListInsert(L,3,'C');
    printf("\n在L的“B”与“D”之间插入“C”后：\nL.data=");
    ListTraverse(L); 

    i=ListDelete(L,1);
    printf("\n在L的删除“A”后：\nL.data=");
    ListTraverse(L); 

    printf("\n");

    return 0;
}

