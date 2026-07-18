#include<stdio.h>
int main()
{
   int num[100],n,i;
   printf("\n...THE NUMBERS IN REVERSE ORDER...\n");
   printf("\nEnter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the %d elements: ",n);
   for(i=0;i<n;i++)
      scanf("%d",&num[i]);
   printf("\nThe numbers in reverse order...\n");
   for(i=(n-1);i>=0;i--)
      printf("%d\t",num[i]);
   printf("\n");
   return 0;
}
