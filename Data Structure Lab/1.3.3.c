#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],b[10][10],multi[10][10];
int m,n,p,q,d,c,k,sum=0;

printf("enter the  number of  rows and columns of 1st matrix:--\n");
scanf("&d&d",&m,&n);

printf("enter the elements  in 1st matrix:--\n");

for(c=0;c<m;c++)
 for(d=0;d<n;d++)
   scanf("%d",&a[c][d]);

printf("enter the  number of  rows and columns of 2nd matrix:--\n");
scanf("&d&d",&p,&q);

if( n !=p)
 printf("cant  multiply with each other\n");
else
{
    printf("enter the elements in 2nd  matrix:--\n");

    for(c=0;c<p;c++)
     for(d=0;d<q;d++)
    scanf("%d",&b[c][d]);
 for(c=0;c<m;c++)
 {
  for(d=0;d<q;d++)
  {
      for(k=0;k<p;k++)
      {
          sum=sum + a[c][k]*b[k][d];
      }
      multi[c][d]= sum;
      sum=0;
  }    
}
printf("ANSWER of MATRICES:-\n");
 
    for ( c = 0 ; c < m; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
        printf("%d\t", multi[c][d]);
 
      printf("\n");
    }
  }
 
   return 0;
}  
