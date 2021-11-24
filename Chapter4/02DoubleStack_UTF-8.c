﻿#include "stdio.h"    
#include "stdlib.h"   

#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status; 

typedef int SElemType; /* SElemType类型根据实际情况而定，这里假设为int */


/* 两栈共享空间结构 */
typedef struct 
{
        SElemType data[MAXSIZE];
        int top1;	/* 栈1栈顶指针 */
        int top2;	/* 栈2栈顶指针 */
}SqDoubleStack;


Status visit(SElemType c)
{
        printf("%d ",c);
        return OK;
}

/*  构造一个空栈S */
Status InitStack(SqDoubleStack *S)
{ 
        S->top1=-1;
        S->top2=MAXSIZE;
        return OK;
}

/* 把S置为空栈 */
Status ClearStack(SqDoubleStack *S)
{ 
      
}

/* 若栈S为空栈，则返回TRUE，否则返回FALSE */
Status StackEmpty(SqDoubleStack S)
{ 
       
}

/* 返回S的元素个数，即栈的长度 */
int StackLength(SqDoubleStack S)
{ 
        

/* 插入元素e为新的栈顶元素 */
Status Push(SqDoubleStack *S,SElemType e,int stackNumber)
{
      
}

/* 若栈不空，则删除S的栈顶元素，用e返回其值，并返回OK；否则返回ERROR */
Status Pop(SqDoubleStack *S,SElemType *e,int stackNumber)
{ 
       
}

Status StackTraverse(SqDoubleStack S)
{
       
}

int main()
{
        int j;
        SqDoubleStack s;
        int e;
        if(InitStack(&s)==OK)
        {
                for(j=1;j<=5;j++)
                        Push(&s,j,1);
                for(j=MAXSIZE;j>=MAXSIZE-2;j--)
                        Push(&s,j,2);
        }

        printf("栈中元素依次为：");
        StackTraverse(s);

        printf("当前栈中元素有：%d \n",StackLength(s));

        Pop(&s,&e,2);
        printf("弹出的栈顶元素 e=%d\n",e);
        printf("栈空否：%d(1:空 0:否)\n",StackEmpty(s));

        for(j=6;j<=MAXSIZE-2;j++)
                Push(&s,j,1);

        printf("栈中元素依次为：");
        StackTraverse(s);

        printf("栈满否：%d(1:否 0:满)\n",Push(&s,100,1));

        
        ClearStack(&s);
        printf("清空栈后，栈空否：%d(1:空 0:否)\n",StackEmpty(s));
        
        return 0;
}