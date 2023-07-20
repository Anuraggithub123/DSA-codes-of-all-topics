#include <iostream>

using namespace std;

struct Stack{
int Size;
int top;
int *arr;
};

int isempty(struct Stack *ptr){
if(ptr->top==-1){
    return 1;
}
else
    return 0;
}

int isfull(struct Stack *ptr){
if(ptr->top==ptr->Size-1){
    return 1;
}
else
    return 0;
}

int main()
{
    struct Size *s;
    s->Size=80;
    s->top=-1;
    s->arr=new int;

    if(isempty(s)){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    if(isfull(s)){
        cout<<"stack is full"<<endl;
    }
    else
        cout<<"stack is not full"<<endl;

    return 0;
}
