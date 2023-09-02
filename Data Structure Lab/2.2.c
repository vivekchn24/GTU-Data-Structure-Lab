#include<stdio.h>

int main()
{
    int array[10],c,d,swap,number;

    printf("Enter the number of element of array: ");
    scanf("%d",&number);

    printf("enter %d the elements:--",number);

    for(c=0;c<number;c++);
    scanf("%d",&array[c]);


    for(c=0;c<number-1;c++)
    {
        for(d=0;d<number-c-1;d++)
        {
            if(array[d]>array[d+1])
            {
                swap= array[d];
                array[d]=array[d+1];
                array[d+1]=swap;

            }

        }

    }
      printf("\n array in order : ");
    for(c = 0; c < number; c++)

        printf(" %d ", array[c]);

    return 0;

}