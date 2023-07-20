#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct node{
char data;
struct node*next;
}*top=NULL;

void push(char x){
struct node*t;
t= new node;
if(t==NULL){
    cout<<"Stack is full";
}
else{
    t->data=x;
    t->next=top;
    top=t;
}
}
char pop()
{
struct node*t;
int x=-1;
if(top==NULL){
    cout<<"Stack is empty";
}
else{
    t=top;
    top=top->next;
    x=t->data;
    free(t);
}
return x;
}

void display()
{
struct node*p;
p=top;
while(p!=NULL){
    cout<<p->data;
    p=p->next;
    cout<<"\n";
}
}
int pre(char x){
if(x=='+'||x=='-'){
    return 1;
}
else if(x=='*'||x=='/'){
    return 2;
}
else
    return 0;
}

int isoperand(char x){
if(x=='+'||x=='-'||x=='*'||x=='/'){
    return 0;
}
else
    return 1;
}

char *intopost(char *infix){
char *postfix;
int len = strlen(infix);
int i,j;
postfix = new char[len+2];
while(infix[i]!='\0'){
    if(isoperand(infix[i])){
        postfix[j++]=infix[i++];
    }
    else{
        if(pre(infix[i])>pre(top->data))
            push(infix[i++]);
        else{
            postfix[j++]=pop();
        }
    }
}
while(top!=NULL){
    postfix[j++]=pop();
    postfix[j]='\0';
}
return postfix;
}

int main()
{
    char *infix="a+b*c";
    push('#');
char *postfix=intopost(infix);
cout<<postfix;
    return 0;
}
