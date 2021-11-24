//创建以数组为基础的线性表
    
    
    
    
    
    #include<stdio.h>
    #include<stdlib.h>
    #include<time.h>
   #define TRUE 1
   #define FALSE 0
   #define MAXSIZE 20
   #define CORRECT 1
   #define ERROR 0
   
   
   typedef int Status;
   typedef int Elemtype;
   struct List{
       int list[MAXSIZE];
       int length;
   };
   typedef struct List List;
   typedef struct List* Listp;
   typedef int Elemtype;
   
   
   
   int listinit(Listp listname,int size);
   int listinsert(Listp listname,int position,Elemtype number);
   int listdelete(Listp listname,int position);
   int listdestory(Listp listname );
                                       
