#include <stdio.h>
int a=0;
int b=0;
void addittion(int a,int b)
{
      int c;
      c = a+b;
      printf("\n the addition of these two numbers is %d + %d = %d", a,b,c);
  
}
void substraction(int a,int b)
{
  int c;
  c = a-b;
  printf("\n the substraction of these two numbers is %d + %d = %d", a,b,c);
}
int main(){
  int first=0, second=0,op;
  
  printf("enter the first number\n");
     scanf("%d", &first);
     printf("enter the second number\n");
     scanf("%d",&second);
   printf("select the operation to perform (+,-):\n for addition press 1 \n for substraction press 2\n ");
   scanf("%d", &op);
  /* write the functions for addition and substractions in the next branches*/
  if(op==1){
      addittion(first ,second);
       
    }else if(op==2)
  {
    substraction(first,second);
     
    }else{
      printf("\n choose the appropriate operation\n");
    }
}
 

