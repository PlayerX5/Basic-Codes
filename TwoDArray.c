#include<stdio.h>
int main()
{
  int m,n,i,j,a[20][20];
  printf("Enter the number of rows and columns respectively:\n");
  scanf("%d%d",&m,&n);
  printf("Enter the elements of the array:\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("The Matrix is :\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }
  printf("\n");
  }
  return 0;
}
