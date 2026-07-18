#include<stdio.h>
int main()
{
   int num[100],max,n,i;
   printf("\n...GREATEST AMONG GIVEN NUMBERS...\n");
   printf("\nEnter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the %d elements: ",n);
   for(i=0;i<n;i++)
      scanf("%d",&num[i]);
   max=num[0];
   for(i=0;i<n;i++)
   {
      if(num[i]>max)
         max=num[i];
   }
   printf("\nGreatest number is %d\n",max);
   return 0;
}
