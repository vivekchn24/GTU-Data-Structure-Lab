
#include <stdio.h>
#include<stdlib.h>

struct node
{
int info;
struct node *link;
};
typedef struct node NODE;
NODE *insert_beg(int n,NODE* head)
{
NODE *NEW;
NEW = (NODE*)MALLOC(sizeof(NODE));
NEW->info = n;
NEW->link = head;
return(NEW);
}
void display(NODE*head)
{
NODE *trav=head;
while(trav!=NULL){
printf("\n INFO : %d : LINK: %p",trav->info,trav->link);
trav=trav->link;
} 
                //trav is NULL
}
NODE *insert_last(int n,NODE* head)
{
NODE *NEW,*trav;
NEW = (NODE*)malloc(sizeof(NODE));//1,2,3
NEW->info = n;//4

NEW->link = NULL;//4
if(head==NULL)//5
return(NEW);//5
trav = head;//6
while(trav->link!=NULL){//7
//printf("\n INFO : %d : LINK: %p",trav->info,trav->link);
trav=trav->link;
}
trav->link = NEW;//8
return(head);//9
}

int main()
{
NODE *first=NULL;
int x;
printf("\n Enter the value of x:");
scanf("%d",&x);
printf("\nBefore insert func call : %p",first);
first = insert_beg(x,first); //function call
printf("\nBefore insert func call : %p",first);
display(first);
printf("\n Enter the value of x2:");
scanf("%d",&x);
printf("\nBefore insert func call : %p",first);
first = insert_last(x,first); //function call
printf("\nBefore insert func call : %p",first);

display(first);
printf("\n Enter the value of x3:");
scanf("%d",&x);
printf("\nBefore insert func call : %p",first);
first = insert_last(x,first); //function call
printf("\nBefore insert func call : %p",first);
display(first);
return 0;
}