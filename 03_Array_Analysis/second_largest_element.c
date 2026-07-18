#include<stdio.h>
int main()
{
   int a[100],n,i,j,temp;
   printf("\n...SECOND LARGEST...\n");
   printf("\nEnter the number of elements: ");
   scanf("%d",&n);
   printf("Enter the %d elements: ",n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-i-1;j++)
      {
         if(a[j]<a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
   printf("\nDescending order of given numbers: \t");
   for(i=0;i<n;i++)
      printf("%d\t",a[i]);
   if(n>=2)
      printf("\nThe second largest number is %d\n",a[1]);
   else
      printf("\nNot enough to find values..\n");
   return 0;
}
