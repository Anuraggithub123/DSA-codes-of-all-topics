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

struct node*RINSERT(struct node*p,int key){
struct node*t;
if(p==NULL){
    t=new node;
    t->data=key;
    t->lchild=t->rchild=NULL;
    return t;
}
if(key<p->data)
    p->lchild=RINSERT(p->lchild,key);
else if(key>p->data)
    p->rchild=RINSERT(p->rchild,key);
return p;
};

int height(struct node*p){
int x,y;
if(p==NULL)return 0;
x=height(p->lchild);
y=height(p->rchild);
return x>y?x+1:y+1;
}

struct node*inpre(struct node*p){
while(p&&p->rchild!=NULL){
    p=p->rchild;
    return p;
}
};
struct node*insucc(struct node*p){
while(p&&p->lchild!=NULL){
    p=p->lchild;
    return p;
}
};
struct node*Delete(struct node*p,int key){
    struct node*q;
    if(p==NULL)
        return NULL;
    if(p->lchild==NULL&&p->rchild==NULL){
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }
if(key<p->data){
    p->lchild=Delete(p->lchild,key);
}
else if(key>p->data){
 p->rchild=Delete(p->rchild,key);
}
else{
    if(height(p->lchild)>height(p->rchild)){
        q=inpre(p->lchild);
        p->data=q->data;
        p->lchild=Delete(p->lchild,q->data);
    }
    else{
        q=insucc(p->rchild);
        p->data=q->data;
        p->rchild=Delete(p->rchild,q->data);
    }
}
return p;
};

int main()
{
    struct node*temp;
    root=RINSERT(root,10);
    RINSERT(root,5);
    RINSERT(root,20);
    RINSERT(root,8);
    RINSERT(root,30);
    Delete(root,10);
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
