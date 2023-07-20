#include <iostream>

using namespace std;

struct Stack{
int siize;
int top;
int *s;
};

void create(struct Stack *st){
cout<<"Enter the size"<<endl;
cin>>st->siize;
st->top=-1;
st->s=new int[st->siize];
}

void display(struct Stack st){
int i;
for(i=st.top;i>=0;i--){
    cout<<st.s[i]<<endl;
}
}

void push(Stack *st,int x){
if(st->top==st->siize-1){
    cout<<"stack overflow";
}
else{
    st->top++;
    st->s[st->top]=x;
}
}

int pop(Stack *st){
int x;
if(st->top==-1){
    cout<<"stack underflow";
}
else{
    x=st->s[st->top];
    st->top--;
}
return x;
}

int peek(Stack st,int index){
int x=-1;
if(st.top-index+1<0){
    cout<<"Invalid position";
}
else
    x=st.s[st.top-index+1];
return x;
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    //display(st);
    //pop(&st);
    //pop(&st);
    //display(st);
    peek(st,1);
    display(st);
    return 0;
}
