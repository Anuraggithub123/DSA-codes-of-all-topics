#include <iostream>

using namespace std;

struct node{
char data;
struct node*next;
}*top=NULL;

void push(int x){
struct node*t;
t=new node;
if(t==NULL){
    cout<<"Stack is full";
}
else{
    t->data=x;
    t->next=top;
    top=t;
}
}

char pop(){
struct node*t;
char x=-1;
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

void display(){
struct node*p;
p=top;
while(p!=NULL){
    cout<<p->data;
    p=p->next;
    cout<<"\n";
    }
}

int isbalanced(char *exp){
int i;
for(i=0;exp[i]!='\0';i++){
    if(exp[i]=='('){
        push(exp[i]);
       }
       else if(exp[i]==')'){
        if(top==NULL){
            return 0;
            }
        else{
            pop();
        }

       }
}

if(top==NULL){
    return 1;
}
else
    return 0;
}
int main()
{
    char *exp="(((a+b)*(c-d))";
    cout<<isbalanced(exp);
    return 0;
}
