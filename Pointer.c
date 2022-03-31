#include<stdio.h>
#include<math.h>
int main()
{
  int i,n;
  float a[10],sum,var,mean,std;
  printf("Enter n:\n");
  scanf("%d",&n);
  float *p; 
  p=a;
  printf("Enter the numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%f",p);
    p++; 
  }
  p=a;
  sum=0.0;
  for(i=0;i<n;i++)
  {
    sum=sum+*p;
    p++;
  }
  mean=sum/n;
  p=a;
  var=0.0;
  for(i=0;i<n;i++)
  {
    var=var+pow((*p-mean),2);
    p++;
  }
  var=var/n;
  std=sqrt(var);
  printf("Sum=%f\n",sum);
  printf("Mean=%f\n",mean);
  printf("Var=%f\n",var);
  printf("Std Dev=%f\n",std);
  return 0;
} 
