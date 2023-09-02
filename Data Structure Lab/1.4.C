#include<stdio.h>
typedef struct
{
    int ID;
    char NAME[30];
    char DESIGNITION[30];
    int salary[10];
    }
    EMPLOYEES;
    int main(){
        int i,n,high;
        
        EMPLOYEES Employees[n];
        printf("enter the number of employees :");
        scanf("%d,&n");
        printf("enter employees details :%d");
        for(i=0;i<n;i++)
        {
            printf("enter employees id");
            scanf("%d,&employees[i].id");

            printf("enter employees name");
            scanf("%s,&employees[i].name");

            printf("enter employees designition");
            scanf("%d,&employees[i].designition");

            printf("enter employees salary");
            scanf("%d,&employees[i].salary");

            printf("\n");
        }

        printf("...................all employees details..................\n");

        for(i=0;i<n;i++)
        {
            
        }
 
    }