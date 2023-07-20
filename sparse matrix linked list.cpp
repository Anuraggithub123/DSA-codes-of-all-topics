#include <iostream>

using namespace std;

struct node{
int data;
struct node*next;
struct node*prev;
};

void doublytraversal(struct node*head){
struct node*p = head;
cout<<p->data<<endl;
p=p->next;
while(p!=0){
    cout<<p->data<<endl;
    p=p->next;
}

}
struct node*insertatfirst(struct node*head,int data){
struct node*ptr = new node;
ptr->data = data;
struct node*p = head;
while(p->prev!=0){
    p=p->next;
}
ptr->next=p;
//ptr->prev = 0;
head = ptr;
return head;

};

struct node*insertatindex(struct node*head,int index,int data){
struct node*ptr=new node;
ptr->data = data;
struct node*p =head;
int i = 0;
while(i!=index-1){
    p=p->next;
    i++;
}
ptr->next =p->next;
p->next = ptr;
return head;
};

struct node*insertatend(struct node*head,int data){
struct node*ptr=new node;
struct node*p = head;
ptr->data=data;
while(p->next!=0){
    p=p->next;
}
p->next=ptr;
ptr->next=0;
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
    head->prev = 0;

    first->data = 6;
    first->next = second;
    first->prev = head;


    second->data = 9;
    second->next = third;
    second->prev = first;

    third->data= 10;
    third->next = 0;
    third->prev = second;

    //doublytraversal(head);
    //head = insertatindex(head,2,8);
    head = insertatend(head,8);
    doublytraversal(head);
    return 0;
}
