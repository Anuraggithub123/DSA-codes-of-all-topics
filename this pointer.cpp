#include <iostream>

using namespace std;

class A{
int a;
public:
    void setdata(int a){
    this->a=a;     //Here if we don't use this pointer it will throw garbage value
    }
    void getdata(void){
    cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    //this is a keyword which is a pointer which points to the object and invokes the member function.
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}

/*
If we don't want to call the getdata function explicitly then
 class A{
int a;
public:
    A & setdata(int a){
    this->a=a;  //Here if we don't use this pointer it will throw garbage value
    return *this;
    }
    void getdata(void){
    cout<<"The value of a is "<<a<<endl;
    }
};

int main()
{
    //this is a keyword which is a pointer which points to the object and invokes the member function.
    A a;
    a.setdata(4).getdata();
    return 0;
}


*/
