#include<stdio.h>
int main()
{
 int A[10][10],B[10][10],C[10][10],i,j,k,n,m,p,q;
 printf("Enter order of matrix:\n");
 scanf("%d%d",&n,&m);
 printf("Enter order of matrix:\n");
 scanf("%d%d",&p,&q);
 if(m!=p)
 {
  printf("Matrix multiplication\n");
  return 1;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   printf("Enter the elements:\n");
   scanf("%d",&A[i][j]);
  }
 }
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;i++)
  {
   printf("Enter the elements:\n");
   sacnf("%d",&B[i][j]);
  }
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<q;j++)
  {
   c[i][j]=0;
   for(k=0;k<p;k++)
   {
    c[i][j]=c[i][j]+(A[i][k]*B[k][j]);
   }
  }
 }
 printf("Resultant matrix\n");
 for(i=0;i<n;i++
 {
  for(j=0;j<q;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n");
 } 
 printf("Resultant matrix\n");
 for(i=0;i<n;i++
 {
  for(j=0;j<q;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n");
 }
 printf("Resultant matrix\n");
 for(i=0;i<n;i++
 {
  for(j=0;j<q;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n"); 
 }
 return 0;
}
