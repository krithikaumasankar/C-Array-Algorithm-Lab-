#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],sum[10][10];
   int r,c,i,j,n;
   printf("\n...MATRIX ADDITION...\n");
   //GET THE NUMBER OF ROWS AND COLUMNS
   printf("\nEnter the number of rows and columns: ");
   scanf("%d%d",&r,&c);
   //INPUT ELEMENTS OF FIRST MATRIX
   printf("\nEnter the elements of first matrix: ");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
         scanf("%d",&a[i][j]);
   }
    //INPUT ELEMENTS OF SECOND MATRIX
    printf("Enter the elements of second matrix: ");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
          scanf("%d",&b[i][j]);
    }
    //ADD THE TWO MATRIX
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
          sum[i][j]=a[i][j]+b[i][j];
    }
    //DISPLAY THE RESULT
    printf("\nSum of the two matrices..\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
          printf("%d\t",sum[i][j]);
       printf("\n");
    }
    printf("\n");
    return 0;
}
