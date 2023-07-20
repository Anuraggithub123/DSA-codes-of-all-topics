#include <iostream>

using namespace std;

struct node{
int data;
struct node*next;
}*Front=NULL,*rear=NULL;

void enqueue(int x){
struct node*t;
t=new node;
if(t==NULL){
    cout<<"Queue is full";
}
else{
    t->data=x;
    t->next=NULL;
    if(Front==NULL){
        Front=rear=t;
    }
    else{
        rear->next=t;
        rear=t;
    }
}
}

int dequeue(){
int x=-1;
struct node*t;
if(Front==NULL){
    cout<<"Queue is empty";
}
else{
    x=Front->data;
    t=Front;
    Front=Front->next;
    free(t);
}
return x;
}

void display(){
struct node*p;
while(p){
    cout<<p->data;
    p=p->next;
}
cout<<endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    cout<<dequeue();
    return 0;
}
