raylist.c                                                                                                      X 
   1 #include<stdio.h>
   2 #include"arraylist.h"
   3 #include<stdlib.h>
   4 #include<time.h>
   5 
   6 int listinit(Listp listname,int size)
   7 {
   8     if(size>MAXSIZE||size<0 ){
   9         return ERROR;
  10     }
  11     int i=listname->length=0;
  12     for(;i<size;i++){
  13         srand((unsigned int)time(NULL)+(unsigned)rand());
  14         listname->list[i]=rand()%100;
  15         listname->length++;
  16     }
  17 
  18    /* for(i=0;i<size;i++){
  19         printf("%d ",listname->list[i]);
  20     }
  21     printf("\n");
  22     */
  23     return CORRECT;
  24 }
  25 
  26 int listinsert(Listp listname,int position,Elemtype number )
  27 {
  28 
  29 }
