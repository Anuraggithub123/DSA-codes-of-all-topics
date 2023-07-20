#include <iostream>
#include <cmath>

using namespace std;

struct node{
  int coeff;
  int exp;
  struct node*next;
};

void traversal(struct node*p){
while(p!=0){
    cout<<"Data: "<<p->coeff<<" with exponential: "<<p->exp<<endl;
    p=p->next;
}
};

double eval(struct node*p,int x){
    long sum=0;
    while(p){
        sum=sum+p->coeff*pow(x,p->exp);
        p=p->next;
    }
return sum;
}


int main()
{
    int X;
   struct node*head = new node;
   struct node*first=new node;
   struct node*second=new node;
   struct node*third=new node;
   head->coeff=4;
   head->exp=3;
   head->next=first;
   first->coeff=9;
   first->exp=2;
   first->next=second;
   second->coeff=6;
   second->exp=1;
   second->next=third;
   third->coeff=7;
   third->exp=0;
   third->next=0;
   traversal(head);
   cout<<"value: "<<eval(head,2);


    return 0;
}
