#include<stdio.h>
int main()
{
    int n, a[20], i, j, temp, first, last, key, mid;
    printf("Enter value of n:\n");
    scanf("%d", &n);
    printf("Enter %d no of elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
    
  } 
