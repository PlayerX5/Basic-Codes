#include<stdio.h>
int main()
{
  int n, a[20], i, first, last, key, mid;
  printf("Enter value of n:\n");
  scanf("%d", &n);
  printf("Enter %d no of elements:\n", n);
  for(i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  first=0;
  last=n-1;
  printf("Enter key element:\n");
  scanf("%d", &key);
  while(first<=last)
  {
    mid=(first+last)/2;
    if(key==a[mid])
    {
      printf("Element %d found at %d\n", key, mid);
      return 0;
    }
    else if(key<a[mid])
    {
      last=mid-1;
    }
    else
    {
      first=mid+1;
    }
  }
  printf("Element %d not found.\n", key);
  return 0;
}
