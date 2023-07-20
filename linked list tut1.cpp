#include <iostream>

using namespace std;

struct node{
  int data;
  struct node*next;
};
void linkedlisttraversal(struct node*p){
    while(p!=NULL){
        cout<<"Element: "<<p->data<<endl;
        p=p->next;
    }
}
struct node*insertatfirst(struct node*head,int data){
    struct node*ptr=new node;
    ptr->data=data;
    ptr->next = head;
    head = ptr;
}
int main() {
    struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head = new node;
    first = new node;
    second = new node;
    third = new node;
    fourth = new node;
    head->data=1;
    head->next=first;
    first->data=4;
    first->next=second;
    second->data=5;
    second->next=third;
    third->data=9;
    third->next=fourth;
    fourth->data=11;
    fourth->next=NULL;
    linkedlisttraversal(head);
    cout<<"After insertion"<<endl;
    head = insertatfirst(head,15);
    linkedlisttraversal(head);
    return 0;
}
