#include <iostream>

using namespace std;

struct node*root =NULL;
struct Node{
struct Node *lchild;
int data;
struct Node *rchild;
};

struct Queue{
int Size;
int Front;
int rear;
int *Q;
};

void create(struct Queue*q,int Size){
q->Size=Size;
q->Front=q->rear=-1;
q->Q=new Node;
}

void enqueue(struct Queue*q,Node *x){
if(q->rear==q->Size-1){
    cout<<"Queue is full";
}
else{
    q->rear++;
    Q[q->rear]=x;
}
}

Node *dequeue(struct Queue *q){
Node *x= NULL;
if(q->Front==q->rear){
    cout<<"Queue is Empty";
}
else{
    q->Front++;
    x=q->Q[q->Front];
}
return x;
}

int isempty(struct Queue q){
return q.Front==q.rear;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
