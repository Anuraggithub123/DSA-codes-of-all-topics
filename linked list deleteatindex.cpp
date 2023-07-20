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
struct node*deleteatindex(struct node*head,int index){
struct node*p = head;
int i = 0;
while(i!=index-1){
    p=p->next;
    i++;
}
struct node*q = p->next;
p->next = q->next;
free(q);
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
    cout<<"Before deletion"<<endl;
    linkedlisttraversal(head);
    head = deleteatindex(head,2);
    cout<<"After deletion"<<endl;
    linkedlisttraversal(head);
    return 0;
}
