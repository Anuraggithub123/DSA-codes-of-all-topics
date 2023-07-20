#include <iostream>

using namespace std;
struct node{
int data;
struct node*next;
};

void linkedlisttraversal(struct node*p){
while(p!=0){
    cout<<"Element: "<<p->data<<endl;
    p=p->next;
}
}

struct node*insertatend(struct node*head,int data){
struct node*ptr=new node;
struct node*p = head;
while(p->next!=0){
    p=p->next;
}
ptr->data = data;
ptr->next = 0;
p->next=ptr;

return head;
};

int main()
{
    struct node*head = new node;
    struct node*first = new node;
    struct node*second = new node;
    struct node*third = new node;
    head->data = 1;
    head->next=first;
     first->data = 10;
    first->next=second;
     second->data = 100;
    second->next=third;
     third->data = 1000;
    third->next=0;
    linkedlisttraversal(head);
    head = insertatend(head,5);
    cout<<"After insertion"<<endl;
    linkedlisttraversal(head);
    return 0;
}
