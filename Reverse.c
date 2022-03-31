#include<stdio.h>
int Reverse(int n)
{
   int sum=0;
   while(n!=0)
   {
     sum=sum*10+n%10;
     n/=10;
   }
   return sum;
}
int main()
{
   int number, reverse;
   printf("Enter a positive interger: ");
   scanf("%d", &number);
   reverse = Reverse(number);
   printf("The reverse of %d is: %d\n",number,reverse);
   return 0;
}
