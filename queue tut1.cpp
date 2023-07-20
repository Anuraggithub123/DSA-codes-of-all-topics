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
q->Front=q->rear=-1;
q->Q=new int[q->Size];
}

void enqueue(struct Queue *q,int x){
if(q->rear==q->Size-1){
    cout<<"Queue is full";
}
else{
    q->rear++;
    Q[q->rear]=x;
}
}

int dequeue(struct Queue *q){
int x=-1;
if(q->Front==q->rear){
    cout<<"Queue is Empty";
}
else{
    q->Front++;
    x=q->Q[q->Front];
}
return x;
}

void display(struct Queue q){
int i;
for(i=q.Front+1;i<=q;i++){
    cout<<q.Q[i]<<endl;
}
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
