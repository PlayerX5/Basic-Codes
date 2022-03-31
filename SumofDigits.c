#include <stdio.h>
int main()
{
  int n, r, sum=0;
  printf("Enter no:\n");
  scanf("%d", &n);
  while(n>0){
    r=n%10;
    sum=sum+r;
    n=n/10;
    }
  printf("%d\n", sum);
  return 0;
}
