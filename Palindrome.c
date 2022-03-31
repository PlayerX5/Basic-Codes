#include <stdio.h>
int main()
{
  int rev=0, lsb, n, num;
  printf("Enter the number :\n");
  scanf("%d", &n);
  num=n;
  while(n!=0){
    lsb=n%10;
    n=n/10;
    rev=rev*10+lsb;
    }
  if(rev==num)
  {
    printf("Entered no is a palindrome.\n");
  }
  else
  {
    printf("Entered no is not a palindrome.\n");
  }
  return 0;
}
