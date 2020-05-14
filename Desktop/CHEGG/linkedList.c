#include<stdio.h>
/* A Linked list node */
struct Node {
    int value;
    struct Node* after;
};
// function to insert a node at the
// beginning of the linked list
void push(struct Node** head_ref, int new_value)
{
    /* allocate node */
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));

    /* put in the value */
    new_node->value = new_value;

    /* link the old list to the new node */
    new_node->after = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
int main()
{
    struct Node* head = NULL;

    // create linked list 10->13->81->32->29
    //passing reference of head so that changes
    //made in push function are reflected in main as well
    push(&head, 29);
    push(&head, 32);
    push(&head, 81);
    push(&head, 13);
    push(&head, 10);

    char option;
    printf("Odd or Even printing (o/e)? ");
    scanf("%c",&option);
    //if option is o then we'll print odd nodes
    if(option=='o'){
        if(head!=NULL){//checking if there are more than single node so that we can start from second node.
            head= head->after;
        }else{
            return;
        }
        while(head!=NULL&& head->after!= NULL){
            printf("%d\t",head->value);
            head= head->after->after;
        }
    }else if(option=='e'){
        //handling case of single node in the linked list
        if(head!=NULL&& head->after==NULL){
            printf("%d\t",head->value);
        }else{
            while(head!=NULL&& head->after!=NULL){
                printf("%d\t",head->value);
                head= head->after->after;
            }
        }
         // handling the last remaining element
        if(head!=NULL){
            printf("%d\t",head->value);
        }
    }
    return 0;
}
