#include<stdio.h>
int main()
{
   float mark[100],tot=0,avg;
   int n,i;
   printf("\n...TOTAL AND AVERAGE OF MARKS OBTAINED...\n");
   printf("\nEnter the number of elements(marks): ");
   scanf("%d",&n);
   printf("Enter the %d marks: ",n);
   for(i=0;i<n;i++)
   {
      scanf("%f",&mark[i]);
   }
   for(i=0;i<n;i++)
      tot+=mark[i];
   avg=tot/n;
   printf("\nTotal=%f",tot);
   printf("\nAverage=%f\n",avg);
   return 0;
}
