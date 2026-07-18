#include<stdio.h>
int main()
{
   int a[100],n,i,key,flag=0;
   printf("\n...LINEAR SEARCH...\n");
   printf("\nEnter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the key to be searched: ");
   scanf("%d",&key);
   printf("Enter the %d elements: ",n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      if(a[i]==key)
      {
         flag=1;
         printf("\nThe element is found in the index %d\n",i);
         break;
      }
   }
   if(flag==0)
      printf("\nElement is not found..\n");
   return 0;
}
