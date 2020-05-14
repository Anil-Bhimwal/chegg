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
/*reverselist()
{
    struct node*t1,*t2;
    t1=t2=NULL;
    while(start!=NULL)
    {
        t2=start->link;
        start->link=t1;
        t1=start;
        start=t2;

    }return(t1);
}*/
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
void deletenode()
{
    struct node*r;
    if(start==NULL)
        printf("list is empty");
    else{r=start;
    start=start->link;
    }
}
/*void deletenodeend(struct node*start)
{
    struct node*m;
    if(start==NULL)
    printf("empty list");
    else
    {
        m=start;
        while(m->link!=NULL)
            m=m->link;
    }
    free(m->link);
    m->link=NULL;
    return (m);
}*/
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
    printf("\n3. delete node from beggining");
    /*printf("\n4.delete a node from the end");*/
    /*printf("\n5.reverse linked list");*/
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
            case 3:
                deletenode();
                break;
           /* case 4:
                deletenodeend(start);
                break;*/
            /*case 5:
                reverselist();
                break;*/
            default:
                printf("invlid choice");

            }getch();
        }
    }
