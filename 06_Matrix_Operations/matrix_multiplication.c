#include<stdio.h>
int main()
{
   int a[10][10],b[10][10],mul[10][10];
   int r1,c1,r2,c2,i,j,k,n;
   printf("\n...MATRIX MULTIPLICATION...\n");
   //GET THE ORDER OF BOTH MATRIX
   printf("\nEnter the number of rows and columns of first matrix: ");
   scanf("%d%d",&r1,&c1);
   printf("Enter the number of rows and columns of second matrix: ");
   scanf("%d%d",&r2,&c2);
   //CHECK MULTIPLICATION CONDITION
   if(c1!=r2)
   {
      printf("\nMatrix multiplication not possible..!\n");
      return 0;
   }
   //INPUT ELEMENTS OF FIRST MATRIX
   printf("\nEnter the elements of first matrix: ");
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
         scanf("%d",&a[i][j]);
   }
    //INPUT ELEMENTS OF SECOND MATRIX
    printf("Enter the elements of second matrix: ");
    for(i=0;i<r2;i++)
    {
       for(j=0;j<c2;j++)
          scanf("%d",&b[i][j]);
    }
    //PERFORM MATRIX MULTIPLICATIO
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
       {
          mul[i][j]=0;
          for(k=0;k<c1;k++)
             mul[i][j]+=a[i][k]*b[k][j];
       }
    }
    //DISPLAY THE RESULT
    printf("\nProduct of the given two matrix..\n");
    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
          printf("%d\t",mul[i][j]);
       printf("\n");
    }
    printf("\n");
    return 0;
}
