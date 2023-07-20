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

struct node*insertatend(struct node*head,int data){
struct node*ptr= new node;
struct node*p = head;
ptr->data = data;
while(p->next!=head){
    p=p->next;
}
p->next = ptr;
ptr->next = head;
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
    head = insertatend(head,56);
    linkedlisttraversal(head);
    return 0;
}
