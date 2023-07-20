#include <iostream>

using namespace std;

struct node{
struct node*lchild;
struct node*rchild;
int data;
}*root=NULL;

void Insert(int key){
struct node*t=root;
struct node*r,*p;
if(root==NULL){
    p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;
    root=p;
    return;
}
while(t!=NULL){
    r=t;
    if(key<t->data){
        t=t->lchild;
    }
    else if(key>t->data){
        t=t->rchild;
    }
    else
        return;
}
   p=new node;
    p->data=key;
    p->lchild=p->rchild=NULL;

    if(key<r->data) r->lchild=p;
    else r->rchild=p;
}

void Inorder(struct node*p){
if(p){
    Inorder(p->lchild);
    cout<<p->data;
    Inorder(p->rchild);
}
}
struct node*Search(int key){
struct node*t=root;
while(t!=NULL){
    if(key==t->data)
        return t;
    else if(key<t->data)
        t=t->lchild;
    else
        t=t->rchild;
}
return NULL;
};

int main()
{
    struct node*temp;
    Insert(10);
    Insert(5);
    Insert(20);
    Insert(8);
    Insert(30);
    Inorder(root);
    cout<<endl;

    temp=Search(2);
    if(temp!=NULL){
        cout<<"Element found "<<temp->data;
    }
    else
        cout<<"Element not found";
    return 0;
}
