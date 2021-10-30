//创建以数组为基础的线性表
   2 
   3 
   4 
   5 
   6 
   7 #include<stdio.h>
   8 #include<stdlib.h>
   9 #include<time.h>
  10 #define TRUE 1
  11 #define FALSE 0
  12 #define MAXSIZE 20
  13 #define CORRECT 1
  14 #define ERROR 0
  15 
  16 
  17 typedef int Status;
  18 typedef int Elemtype;
  19 struct List{
  20     int list[MAXSIZE];
  21     int length;
  22 };
  23 typedef struct List List;
  24 typedef struct List* Listp;
  25 typedef int Elemtype;
  26 
  27 
  28 
  29 int listinit(Listp listname,int size);
  30 int listinsert(Listp listname,int position,Elemtype number);
  31 int listdelete(Listp listname,int position);
  32 int listdestory(Listp listname );
 ~                                      