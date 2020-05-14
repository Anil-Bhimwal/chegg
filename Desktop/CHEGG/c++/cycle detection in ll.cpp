#include<iostream>
using namespace std;

class Node{
   public:
       int data;
       Node* next;
       Node(int data)
       {
           this->data=data;
          this-> next=NULL;
       }
};
Node* takeInput()
{

    cout<<"enter node::"<<endl;
    int num;
    cin >>num;
    Node*head=NULL;
    Node*tail=NULL;
    while(num!=-1)
    {
        Node*newNode=new Node(num);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>num;

    }
    return head;
}
void remove_cycle(Node* this_ptr,Node* head)
{
    Node* ptr1=head;
    Node* ptr2;
    while(1){
        ptr2=this_ptr;
        while(ptr2->next!=this_ptr&&ptr2->next!=ptr1)
        {
            ptr2=ptr2->next;
        }
        if(ptr2->next==ptr1)
        {
            break;
        }
        ptr1=ptr1->next;

    }
    ptr2->next=NULL;
}
void detect_cycle(Node* head)
{
    Node *slow=head;
    Node*fast=head;
    while(slow!=NULL&&fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            remove_cycle(slow,head);
            break;
        }
    }
}
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){
  // Node*head= takeInput();
   Node *head = new Node(21);
    head->next = new Node(20);
    head->next->next = new Node(5);
    head->next->next->next = new Node(55);
    head->next->next->next->next = new Node(90);
    head->next->next->next->next->next = head->next->next;
   detect_cycle(head);
   print(head);

}
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public :
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
 if(preLength==0||inLength==0)
   return NULL;
  int x=-1, k, i, ins, pres, ine, pre;
  i=0;
  pre=0;
  ine=inLength-1;
  pre=preLength-1;
  BinaryTreeNode<int>* root=new BinaryTreeNode<int>(0);
  while(i<ine&&x==-1)
  {
    if(*(inorder+i)==*(preorder))
    {
      x=i;
    }
    i++;
  }
  root->data=*(preorder);
  k=x-ins+pres;
  root->left=buildTree(preorder+1,k,inorder,x);
  root->right=buildTree(preorder+k+1,preLength-k,inorder+x+1,inLength-x);

  return root;

}
