raylist.c                                                                                                      X 
    #include<stdio.h>
    #include"arraylist.h"
    #include<stdlib.h>
    #include<time.h>
    
    int listinit(Listp listname,int size)
    {
        if(size>MAXSIZE||size<0 ){
            return ERROR;
       }
       int i=listname->length=0;
       for(;i<size;i++){
           srand((unsigned int)time(NULL)+(unsigned)rand());
           listname->list[i]=rand()%100;
           listname->length++;
       }
   
      /* for(i=0;i<size;i++){
           printf("%d ",listname->list[i]);
       }
       printf("\n");
       */
       return CORRECT;
   }
   
   int listinsert(Listp listname,int position,Elemtype number )
   {
   
   }
