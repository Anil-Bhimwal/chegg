#include<stdio.h>
#include<conio.h>
#include<iostream>
struct node{
int data;
struct node *next;
};


void display(struct node*last)
{
    struct node *t;
    if(last==NULL)
        printf("\n\tlist is empty");
    else
        t=last->next;
    do
    {
        printf("\t %d",t->data);
        t=t->next;
    }while(t!=last->next);
}
struct node* addtoempty(struct node *last,int value)
{
    last=NULL;
    struct node *n;
    n=new struct node();
     n->data=value;
     last=n;
     last->next=last;
     return(last);

}
struct node*addatbeg(struct node *last,int value)
{
 struct node *n;
n=new struct node();
 n->data=value;
 n->next=last->next;
 last->next= n;
 return (last);
}
struct node *addatend(struct node*last ,int value)
{
 struct node*n;
 n=new struct node();
   n->data=value;
  n->next=last->next;
  last->next=n;
  last=n;
  return(last);
}
struct node *addafter(struct node *last,int value,int item)
{
 struct node*t;

 do{
    if(t->data==item)
    {
        struct node *n;
         n=new struct node();
                 n->data=value;
         n->next = t->next;
    }
 }   while(t!=last->next);
 printf("%d is not in the list",item);
 return (last);
}
struct node*del(struct node*last,int value)
{
 struct node *t,*p;
 if(last==NULL)
 {
     printf("empty list");
     return(last);
 }
  if((last=last->next)&&(last->data=value))
 {
     t=last;
     last=NULL;

     return (last);
 }
  if(last->next->data=value)
 {
     t=last->next;
     last->next=t->next;

     return(last);
 }

 p=last->next;
 while(p->next!=last)
 {
     if(p->next->data==value)
       t =p->next;
     p->next=t->next;

     return (last);

 }
 p=p->next;


if(last->data=value)
{
    t=last;
    p->next=last->next;
    last=p;


    return(last);
}}
struct node *createlist(struct node *last){

 int i,n,value;
 printf("\n how many values would you like to enter");
 scanf("%d",&n);
 printf("\n enter first data for the list ");
 scanf("%d",&value);
 last=addtoempty(last,value);
 for(i=2;i<=n;i++)
 {
     printf("\n enter data for the list");
     scanf("%d",&value);
     last=addatend(last,value);

 }return (last);
}
main()
{
    int choice,value,item;
    struct node*last=NULL;
    while(1)
    {
        printf("\n1.create list");
        printf("\n 2. display list");
        printf("\n 3. add to empty list");
        printf("\n4. add at beginning");
        printf("\n 5. add at end");
        printf("\n 6. add after");
        printf("\n 7. delete");
        printf("\n 8. exit");
        printf("\n enter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
           last=createlist(last);
            break;
        case 2:
            display(last);
            break;
        case 3:
            printf("\nenter a number for the list");
            scanf("%d",&value);
            last=addtoempty(last,value);
            break;
        case 4:
            printf("\n enter a number for the list");
            scanf("%d",&value);
            last=addatbeg(last,value);
            break;
        case 5:
            printf("\n enter a number for the list ");
            scanf("%d",&value);
            last =addatend(last,value);
            break;
        case 6:
             printf("\n enter a number for the list ");
            scanf("%d",&value);
            printf("\n enter item value new value to be add");
            scanf("%d",&item);
            last=addafter(last,value,item);
            break;
        case 7:
            printf("\n enter value of element to be delete");
            scanf("%d",&value);
            last=del(last,value);
            break;

        default :
            printf("\n invlaid choice");
            }
            getch();
}
}
