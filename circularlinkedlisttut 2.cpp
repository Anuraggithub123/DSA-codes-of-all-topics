#include <iostream>

using namespace std;

struct node{
int data;
struct node*next;
};

void linkedlisttraversal(struct node*head){
struct node*p = head;
cout<<p->data<<endl;
p=p->next;
while(p!=head){
    cout<<p->data<<endl;
    p=p->next;
}

}

struct node*insertatindex(struct node*head,int index,int data){
struct node*ptr= new node;
struct node*p = head;
ptr->data = data;
int i = 0;
while(i!=index-1){
    p=p->next;
    i++;
}
ptr->next = p->next;
ptr->data = data;
p->next=ptr;
return head;
};

int main()
{
    struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;

    head = new node;
    first = new node;
    second = new node;
    third = new node;

    head->data = 5;
    head->next = first;

    first->data = 6;
    first->next = second;

    second->data = 9;
    second->next = third;

    third->data= 10;
    third->next = head;

    linkedlisttraversal(head);
    cout<<"After insertion"<<endl;
    head = insertatindex(head,1,56);
    linkedlisttraversal(head);
    return 0;
}
