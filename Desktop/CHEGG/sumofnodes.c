#include <stdio.h>
#include<conio.h>
//linked list node structure
struct list_t{

    int data;
    struct list_t* next;
};

struct list_t* head;

void insert( int data){

    /* Allocate memory*/
    struct list_t* temp = (struct list_t*)malloc(sizeof(struct list_t));

    temp->data = data;
    temp->next = head;

    head = temp;
    return head;

}

int sum_recur(struct list_t* head){
    if(head==NULL)
    {
        return 0;
    }
    int recur_ans= sum_recur(head->next);
    return head->data+ recur_ans;

}

void main(){

    head = NULL;

    insert(2);
    insert(4);
    insert(10);
    insert( 5);
    insert (10);


    /* calling sum_recur function to find the sum of all node nodes. */
    int sum= sum_recur(head);
    printf("sum of all nodes is: %d ", sum);


}
