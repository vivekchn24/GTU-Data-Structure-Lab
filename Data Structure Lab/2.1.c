#include<stdio.h>
#include<time.h>
int main(void)
{
    int array[100],n,i,x;
    printf("Enter the number of element which you want to input\n");
    scanf("%d",&n);

    printf("Enter the %d intergers:\n",n);
    for(i=0;i<0;i++)
    scanf("%d",&array[i]);

    printf("Enter the serch elements which you want to search\n");
    scanf("%d",&x);

    int result =binarysearch("array,0,n-1,x");
    if (result == -1)
    printf("This elelment is not present at the index");
    else
    printf("This element is present at the index %d",result);
    return 0;
}

    
