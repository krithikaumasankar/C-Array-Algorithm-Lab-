#include<stdio.h>
int main()
{
   int a[10][10],b[10][10];
   int r,c,i,j,n;
   printf("\n...MATRIX TRANSPOSE...\n");
   //GET THE NUMBER OF ROWS AND COLUMNS
   printf("\nEnter the number of rows and columns: ");
   scanf("%d%d",&r,&c);
   //INPUT ELEMENTS OF MATRIX
   printf("\nEnter the elements of matrix: ");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
         scanf("%d",&a[i][j]);
   }
   printf("The given matrix..\n");
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
         printf("%d\t",a[i][j]);
      printf("\n");
   }
    //COMPUTE TRANSPOSE
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
          b[i][j]=a[j][i];
    }
    //DISPLAY THE RESULT
    printf("\nTranspose of the given matrix..\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
          printf("%d\t",b[i][j]);
       printf("\n");
    }
    printf("\n");
    return 0;
}
