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

typedef int Status;		/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;	/* ElemType类型根据实际情况而定，这里假设为int */

typedef char String[MAXSIZE+1]; /*  0号单元存放串的长度 */

/* 生成一个其值等于chars的串T */
Status StrAssign(String T,char *chars)
{ 
	int i;
	if(strlen(chars)>MAXSIZE)
		return ERROR;
	else
	{
		T[0]=strlen(chars);
		for(i=1;i<=T[0];i++)
			T[i]=*(chars+i-1);
		return OK;
	}
}

Status ClearString(String S)
{ 
	
}

/*  输出字符串T。 */
void StrPrint(String T)
{ 
	
}

/*  输出Next数组值。 */
void NextPrint(int next[],int length)
{ 
	
}

/* 返回串的元素个数 */
int StrLength(String S)
{ 
	
}

/* 朴素的模式匹配法 */
int Index(String S, String T, int pos) 
{
	
}

/* 通过计算返回子串T的next数组。 */
void get_next(String T, int *next) 
{
	
}

/* 返回子串T在主串S中第pos个字符之后的位置。若不存在，则函数返回值为0。 */
/*  T非空，1≤pos≤StrLength(S)。 */
int Index_KMP(String S, String T, int pos) 
{
	
}

/* 求模式串T的next函数修正值并存入数组nextval */
void get_nextval(String T, int *nextval) 
{
  
}

int Index_KMP1(String S, String T, int pos) 
{
	
}

int main()
{
	int i,*p;
	String s1,s2;
	
	StrAssign(s1,"000000000200000000020000000002000000000200000000020000000001");
	printf("主串为: ");
	StrPrint(s1);
	StrAssign(s2,"0000000001");
	printf("子串为: ");
	StrPrint(s2);
	printf("\n");
	
	printf("\n");
	printf("主串和子串在第%d个字符处首次匹配（朴素模式匹配算法）\n",Index(s1,s2,1));
	printf("主串和子串在第%d个字符处首次匹配（KMP算法） \n",Index_KMP(s1,s2,1));
	printf("主串和子串在第%d个字符处首次匹配（KMP改良算法） \n",Index_KMP1(s1,s2,1));

	return 0;
}
