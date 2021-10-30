 #include<stdio.h>
   2 #include"arraylist.h"
   3 int
   4 main(int argc,char* argv[])
   5 {
   6     List listex;
   7     int size;
   8     printf("Please input size:");
   9     scanf("%d",&size);
  10     if(listinit(&listex,size)){
  11         printf("list init succeed!\n");
  12     }
  13 
  14     int i;
  15     for(i=0;i<size;i++){
  16         printf("%d ",listex.list[i]);
  17     }
  18     printf("\n");
  19     return 0;
  20 }
 ~             