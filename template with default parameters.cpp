#include <iostream>

using namespace std;

template<class T1=int,class T2=float,class T3=char>
class anurag{
public:
T1 a;
T2 b;
T3 c;
anurag(T1 x,T2 y,T3 z){
a=x;
b=y;
c=z;
}
void display(){
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;
}
};

int main()
{
    anurag<> a(6,4.4,'a');
    a.display();
    cout<<endl;
    anurag<float,char,char> g('a','b','c');
    g.display();
    return 0;
}
