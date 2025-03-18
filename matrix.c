#include <stdio.h>
int main()
{
int r1 , c1, r2, c2,i,j;
printf("Enter the size \n");
scanf("%d %d",&r1,&c1);
int a[r1][c1];
printf("enter the element of the matrix");
for (i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the size \n");
scanf("%d %d",&r2,&c2);
int b[r1][c2];
printf("enter the element of the matrix");
for (i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
if(r1==r2&&c1==c2)
{
int c[r1][c1];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("sum of the matrices \n");
for (i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else{
printf("invalid");
}
}
