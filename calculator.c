#include <stdio.h>
int main(){
  int first, second;
  char op;
  printf("enter the two numbers");
     scanf("%d %d", &first, &second);
   printf("select the operation to perform (+):");
   scanf("%c", &op);
  /* write the functions for addition and substractions in the next branches*/
  if(op=='+'){
      addittion(first ,second);
       
    }else if (op=='-')
  {
    substraction(first,second);
     
    }else{
      printf("choose the appropriate operation");
    }
}
 addittion(int a,int b)
{
      int c;
      c = a+b;
      printf("the addition of these two numbers is %d + %d = %d", a,b,c);
  
}
substraction(int a,int b)
{
  int c;
  c = a-b;
  printf("the substraction of these two numbers is %d + %d = %d", a,b,c);
}

