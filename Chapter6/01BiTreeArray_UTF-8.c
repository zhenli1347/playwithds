#include "stdio.h"    
#include "stdlib.h"   

#include "math.h"  
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 100 /* 存储空间初始分配量 */
#define MAX_TREE_SIZE 100 /* 二叉树的最大结点数 */

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int TElemType;  /* 树结点的数据类型，目前暂定为整型 */
typedef TElemType SqBiTree[MAX_TREE_SIZE]; /* 0号单元存储根结点  */

typedef struct
{
	int level,order; /* 结点的层,本层序号(按满二叉树计算) */
}Position;

TElemType Nil=0; /*  设整型以0为空 */

Status visit(TElemType c)
{
	printf("%d ",c);
	return OK;
}

/* 构造空二叉树T。因为T是固定数组，不会改变，故不需要& */
Status InitBiTree(SqBiTree T)
{
	int i;
	for(i=0;i<MAX_TREE_SIZE;i++)
		T[i]=Nil; /* 初值为空 */
	return OK;
}

/* 按层序次序输入二叉树中结点的值(字符型或整型), 构造顺序存储的二叉树T */
Status CreateBiTree(SqBiTree T)
{ 
	
}

#define ClearBiTree InitBiTree /* 在顺序存储结构中，两函数完全一样 */

/* 初始条件: 二叉树T存在 */
/* 操作结果: 若T为空二叉树,则返回TRUE,否则FALSE */
Status BiTreeEmpty(SqBiTree T)
{ 
	
}

/* 初始条件: 二叉树T存在。操作结果: 返回T的深度 */
int BiTreeDepth(SqBiTree T)
{ 
   
}

/* 初始条件: 二叉树T存在 */
/* 操作结果:  当T不空,用e返回T的根,返回OK;否则返回ERROR,e无定义 */
Status Root(SqBiTree T,TElemType *e)
{ 
	
}

/* 初始条件: 二叉树T存在,e是T中某个结点(的位置) */
/* 操作结果: 返回处于位置e(层,本层序号)的结点的值 */
TElemType Value(SqBiTree T,Position e)
{ 
	 
}

/* 初始条件: 二叉树T存在,e是T中某个结点(的位置) */
/* 操作结果: 给处于位置e(层,本层序号)的结点赋新值value */
Status Assign(SqBiTree T,Position e,TElemType value)
{ 
	
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 若e是T的非根结点,则返回它的双亲,否则返回＂空＂ */
TElemType Parent(SqBiTree T,TElemType e)
{ 
	
}


/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的左孩子。若e无左孩子,则返回＂空＂ */
TElemType LeftChild(SqBiTree T,TElemType e)
{ 
	
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的右孩子。若e无右孩子,则返回＂空＂ */
TElemType RightChild(SqBiTree T,TElemType e)
{ 
	
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的左兄弟。若e是T的左孩子或无左兄弟,则返回＂空＂ */
TElemType LeftSibling(SqBiTree T,TElemType e)
{ 
	
}

/* 初始条件: 二叉树T存在,e是T中某个结点 */
/* 操作结果: 返回e的右兄弟。若e是T的右孩子或无右兄弟,则返回＂空＂ */
TElemType RightSibling(SqBiTree T,TElemType e)
{ 
	
}

/* PreOrderTraverse()调用 */
void PreTraverse(SqBiTree T,int e)
{ 
	
}

/* 初始条件: 二叉树存在 */
/* 操作结果: 先序遍历T。 */
Status PreOrderTraverse(SqBiTree T)
{ 
	
}

/* InOrderTraverse()调用 */
void InTraverse(SqBiTree T,int e)
{ 
	
}

/* 初始条件: 二叉树存在 */
/* 操作结果: 中序遍历T。 */
Status InOrderTraverse(SqBiTree T)
{ 
	
}

/* PostOrderTraverse()调用 */
void PostTraverse(SqBiTree T,int e)
{ 
	
}

/* 初始条件: 二叉树T存在 */
/* 操作结果: 后序遍历T。 */
Status PostOrderTraverse(SqBiTree T)
{ 
	
}

/* 层序遍历二叉树 */
void LevelOrderTraverse(SqBiTree T)
{ 
	
}

/* 逐层、按本层序号输出二叉树 */
void Print(SqBiTree T)
{ 
	
}


int main()
{
	Status i;
	Position p;
	TElemType e;
	SqBiTree T;
	InitBiTree(T);
	CreateBiTree(T);
	printf("建立二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
	i=Root(T,&e);
	if(i)
		printf("二叉树的根为：%d\n",e);
	else
		printf("树空，无根\n");
	printf("层序遍历二叉树:\n");
	LevelOrderTraverse(T);
	printf("前序遍历二叉树:\n");
	PreOrderTraverse(T);
	printf("中序遍历二叉树:\n");
	InOrderTraverse(T);
	printf("后序遍历二叉树:\n");
	PostOrderTraverse(T);
	printf("修改结点的层号3本层序号2。");
	p.level=3;
	p.order=2;
	e=Value(T,p);
	printf("待修改结点的原值为%d请输入新值:50 ",e);
	e=50;
	Assign(T,p,e);
	printf("前序遍历二叉树:\n");
	PreOrderTraverse(T);
	printf("结点%d的双亲为%d,左右孩子分别为",e,Parent(T,e));
	printf("%d,%d,左右兄弟分别为",LeftChild(T,e),RightChild(T,e));
	printf("%d,%d\n",LeftSibling(T,e),RightSibling(T,e));
	ClearBiTree(T);
	printf("清除二叉树后,树空否？%d(1:是 0:否) 树的深度=%d\n",BiTreeEmpty(T),BiTreeDepth(T));
	i=Root(T,&e);
	if(i)
		printf("二叉树的根为：%d\n",e);
	else
		printf("树空，无根\n");
	
	return 0;
}

