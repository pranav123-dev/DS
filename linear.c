#include<stdio.h>
void main()
{
  int n,i,a[50],e;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("\nEnter %d elements in array:",n);
  for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter the element to be searched:");
   scanf("%d",&e);
   for(i=0;i<n;i++)
    {
      if(a[i]==e)
      {
       printf("%d is found at %d",e,i);
       break;
      }
     } 
      if(i==n)
       {
         printf("%d is not found",e);
       }
     }       
