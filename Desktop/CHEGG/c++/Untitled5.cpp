#include<iostream>
using namespace std;
class Node
{ public:
    int data;
    Node*next;

    Node(int data)
    {
       this->data=data;
       next=NULL;
    }

};

Node* takeInput(){
	Node* head = NULL, *tail = NULL;
	int data;
	cout<<"enter elements of linked list & last element must be -1\n";
	cin >> data;
	while(data != -1){
		Node* newNode = new Node(data);
		if(head == NULL){
			head = newNode;
			tail = newNode;
		}else{
			tail->next = newNode;
			tail = newNode;

		}
		cin >> data;
	}
	return head;
}

void print(Node* head){

	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;

	}
int counts( Node* head, int x)
{
    Node* ptr1, *ptr2, *ptr3;
    int count = 0;


    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
        for (ptr2 = ptr1->next; ptr2 != NULL; ptr2 = ptr2->next)
            for (ptr3 = ptr2->next; ptr3 != NULL; ptr3 = ptr3->next)
                if ((ptr1->data + ptr2->data + ptr3->data) == x)
                    {
                        cout<<ptr1->data<<" "<<ptr2->data<<" "<<ptr3->data<<endl;
                      cout<<endl;
                      count++;

                     }
    return count;
}

int main(){
  int x;
	Node* head = takeInput();

	print(head);



   cout<<"value of x\n";
   cin>>x;
   int ans=counts(head,x);
   cout<<ans;






}
