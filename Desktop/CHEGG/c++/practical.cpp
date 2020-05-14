#include<iostream>
using namespace std;

class Node{

	public:

	int data;
	Node* next;

	Node(int data){
		this->data = data;
		next = NULL;
	}

};
Node* takeInput(){
	Node* head = NULL, *tail = NULL;
	int data;
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
int count_triplet(Node* head,int x,int counts)
{
    while(head->next->next!=NULL)
    {
        Node*temp1=head->next;
        while(temp1->next!=NULL)
        {
            Node* temp2=temp2->next;
            while(temp2!=NULL)
            {
                if((head->data+temp1->data+temp2->data)==x)
                {
                    cout<<head->data<<" "<<temp1->data<<" "<<temp2->data<<" "<<endl;
                    counts++;
                    temp2=temp2->next;
                }
                else
                    temp2=temp2->next;
            }
            temp1=temp1->next;
        }
        head=head->next;
    }
    return counts;

}
int main()
{
    Node* head=takeInput();
    print(head);
    int x,counts=0;
    cout<<"enter value of x ";
    cin>>x;

    int ans=count_triplet(head,x,counts);
    return ans;
}
