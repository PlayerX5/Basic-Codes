#include <stdio.h>
int main()
 {
  int num1,num2;
  float result;
  char op;
  printf("enter two numbers:\n");
  scanf("%d%d",&num1&num2);
  printf("Enter operator\n");
  scanf(" %c",&op);
  if(op=='+')
  {
    result=num1+num2;
    printf("result=%f\n",result);
  }
  else if(op=='-')
  {
    result=num1-num2;
    printf("result=%f\n",result);
  }
  else if(op=='*')
  {
    result=num1*num2;
    printf("result=%f\n",result);
  }
else if(op=='/')
{
 if(num2==0)
  {
    printf("Enter any non zero value\n");
    return(-1);
  }
else
{
  result=num1/num2;
  printf("Result= %f\n",result);
}
}
else if(op=='%')
{
 if(num2==0)
  {
    printf("Enter any non zero value\n");
    return(-1);
  }
else
{
  result=num1%num2;
  printf("Result= %f\n",result);
}
}
else if
{
 printf("Invalid operator\n");
    return(1);
}

  return 0;
}
