#include<stdio.h>
int factorial(int n);
int main()
{
  int num,result;
  printf("Enter a number: ");
  scanf("%d",&num);
  {
    result = factorial(num);
    printf("Factorial of %d = %d\n", num, result);
  }
  return 0;
}
int factorial(int n)
{
  int fact=1;
  for(int i=n; i>=1; i--)
  {
    fact *= i;
  }
  return fact;
}
