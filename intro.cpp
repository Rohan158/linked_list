#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void inserthead(Node* &head,int data)
{
    Node* node=new Node(data);
    node->next=head;
    head=node;
}
 
 void insertend(Node* &head,int data)
 {
    Node* node=new Node(data);
    Node* node1=head;
    while(node1->next!=NULL)
    {
        node1=node1->next;
    }
  
    node1->next=node;
 }

 void insertbet(Node* &head,int data,int pos)
 {
    Node* node1=new Node(data);
    int cnt=1;
    if(pos==1)
    {
        inserthead(head,data);
        
    }

    Node* node=head;
    while(cnt<pos-1)
    {
        node=node->next;
        cnt++;
    }
    node1->next=node->next;
    node->next=node1;
 }

void printlin(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
  cout<<"\n";
}

int main()
{

    Node* node1=new Node(10);
    Node* node2=new Node(12);
    node1->next=node2;
    
    Node* head=node1;
    cout<<"insertion at head "<<endl;
    inserthead(head,22);
    printlin(head);

   cout<<"insertion at tail "<<endl; 
   insertend(head,25);
   printlin(head);

   cout<<"insertion at bet "<<endl;
   insertbet(head,55,2);
   printlin(head);

//    helloba
// step2
    
    return 0;
}