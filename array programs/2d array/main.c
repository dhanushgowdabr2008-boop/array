#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
 int a[10][10];
 int r,c,sum,max,max_row=0,max_coloumn=0;
 printf("enter the number of rows and coloumns\n");
 scanf("%d %d",&r,&c);
 printf("enter matrix elements");
 for (i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         scanf("%d",&a[i][j]);
     }
 }
 printf("sum of rows:\n");
     for(i=0;i<r;i++)
 {
     sum=0;
     for (j=0;j<c;j++)
     {
        sum=sum+a[i][j];
     }
 printf("row %d sum=%d\n",i+1,sum);
 }
printf("the sum of colomns\n");
for(j=0;j<c;j++)
{

    sum=0;
    for(i=0;i<r;i++)
    {

        sum=sum+a[i][j];
    }
    printf("coloumn%d sum=%d\n",j+1,sum);
}
printf("find largest number and its position\n");
max=a[0][0];
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
     if(a[i][j]>max)
     {
         max=a[i][j];
         max_row=i;
         max_coloumn=j;
     }
 }
}
printf("largest number=%d\n",max);
printf("position= row%d coloumn%d\n",max_row+1,max_coloumn+1);
return 0;
}
