#include <stdio.h>
int main(){
  int first, second,substraction;
  char op;
  printf("enter the two numbers");
     scanf("%f %f", &first, &second);
   printf("select the operation to perform (-):");
   scanf("%c", &op);
  /* write the functions for addition and substractions in the next branches*/
  if (op=='-')
  {
    substraction(first,second);
     
    }else{
      printf("choose the appropriate operation");
    }
}
substraction(int a,int b)
{
  int c;
  c = a-b;
  printf("the substraction of these two numbers is %d + %d = %d", a,b,c);
}

