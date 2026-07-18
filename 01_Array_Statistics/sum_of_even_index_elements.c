#include<stdio.h>
int main()
{
   int num[100],s1=0,s2=0,n,i;
   printf("\n...SUM OF NUMBERS IN EVEN INDEX...\n");
   printf("\nEnter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the %d elements: ",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&num[i]);
      s1=s1+num[i];
      if(i%2==0)
         s2=s2+num[i];
   }
   printf("\nThe sum of given %d numbers is: %d",n,s1);
   printf("\nThe sum of numbers in even index is: %d\n",s2);
   return 0;
}
