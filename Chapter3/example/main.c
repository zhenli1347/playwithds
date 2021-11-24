 #include<stdio.h>
    #include"arraylist.h"
    int
    main(int argc,char* argv[])
    {
        List listex;
        int size;
        printf("Please input size:");
        scanf("%d",&size);
       if(listinit(&listex,size)){
           printf("list init succeed!\n");
       }
   
       int i;
       for(i=0;i<size;i++){
           printf("%d ",listex.list[i]);
       }
       printf("\n");
       return 0;
   }
              
