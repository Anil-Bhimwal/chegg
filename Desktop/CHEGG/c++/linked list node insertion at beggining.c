#include<stdio.h>
#include<conio.h>
struct node{
int info;
struct node*link;
};
struct node *start=NULL;
struct node*createlist()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);

}
void insertnode()
{
    struct node*temp,*t;
    temp=createlist();
    printf("enter a number:");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(start==NULL)
        start=temp;
    else{t=start;
    while(t->link!=NULL)
        t=t->link;
        t->link=temp;
    }
}
void viewlist()
{
    struct node*t;
    if(start==NULL)
        printf("empty list");
    else
        t=start;
    while(t!=NULL)
    {
        printf("%d\t",t->info);
        t=t->link;
    }
}
int menu()
{int ch;
    printf("\n1. add a value to the list");
    printf("\n2. view list");

    printf("\nenter your choice:");
    scanf("%d",&ch);
    return(ch);
    }
    void main()
    {
        while(1)
        {
            switch(menu())
            {
            case 1:
                insertnode();
                break;
            case 2:
                viewlist();
                break;

            default:
                printf("invlid choice");

            }getch();
        }
    }
