#include <iostream>

using namespace std;

struct Queue{
int Size;
int Front;
int rear;
int *Q;
};

void create(struct Queue*q,int Size){
q->Size=Size;
q->Front=q->rear=0;
q->Q=new int[q->Size];
}

void enqueue(struct Queue *q,int x){
if((q->rear+1)%q->Size==q->Front){
    cout<<"Queue is full";
}
else{
    q->rear=(q->rear+1)q->Size;
    Q[q->rear]=x;
}
}

int dequeue(struct Queue *q){
int x=-1;
if(q->Front==q->rear){
    cout<<"Queue is Empty";
}
else{
    q->Front=(q->Front+1)%q->Size;
    x=q->Q[q->Front];
}
return x;
}

void display(struct Queue q){
int i=q.Front+1;
do{
    cout<<q.Q[i];
    i=(i+1)%q.Size;
}while((i!=q.rear+1)%q.Size)
cout<<endl;
}
int main()
{
    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    display(q);
    cout<<dequeue(&q);
    return 0;
}
