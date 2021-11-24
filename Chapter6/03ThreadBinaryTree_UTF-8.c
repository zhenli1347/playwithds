#include "string.h"
#include "stdio.h"    
#include "stdlib.h"   

#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* 存储空间初始分配量 */

typedef int Status;	/* Status是函数的类型,其值是函数结果状态代码,如OK等 */
typedef char TElemType;
typedef enum {Link,Thread} PointerTag;	/* Link=0表示指向左右孩子指针, */
										/* Thread=1表示指向前驱或后继的线索 */
typedef  struct BiThrNode	/* 二叉线索存储结点结构 */
{
	TElemType data;	/* 结点数据 */
	struct BiThrNode *lchild, *rchild;	/* 左右孩子指针 */
	PointerTag LTag;
	PointerTag RTag;		/* 左右标志 */
} BiThrNode, *BiThrTree;

TElemType Nil='#'; /* 字符型以空格符为空 */

Status visit(TElemType e)
{
	printf("%c ",e);
	return OK;
}

/* 按前序输入二叉线索树中结点的值,构造二叉线索树T */
/* 0(整型)/空格(字符型)表示空结点 */
Status CreateBiThrTree(BiThrTree *T)
{ 
	
}

BiThrTree pre; /* 全局变量,始终指向刚刚访问过的结点 */
/* 中序遍历进行中序线索化 */
void InThreading(BiThrTree p)
{ 
	
}

/* 中序遍历二叉树T,并将其中序线索化,Thrt指向头结点 */
Status InOrderThreading(BiThrTree *Thrt,BiThrTree T)
{ 
	
}

/* 中序遍历二叉线索树T(头结点)的非递归算法 */
Status InOrderTraverse_Thr(BiThrTree T)
{ 
	
}

int main()
{
	BiThrTree H,T;
	printf("请按前序输入二叉树(如:'ABDH##I##EJ###CF##G##')\n");
 	CreateBiThrTree(&T); /* 按前序产生二叉树 */
	InOrderThreading(&H,T); /* 中序遍历,并中序线索化二叉树 */
	printf("中序遍历(输出)二叉线索树:\n");
	InOrderTraverse_Thr(H); /* 中序遍历(输出)二叉线索树 */
	printf("\n");
	
	return 0;
}


