#include <iostream>

using namespace std;
/*
 template<class T>
 class anurag{
  public:
      T data;
      anurag(T a){
      data = a;
      }
      void display();
 };

 template<class T>
 void anurag<T>::display(){
 cout<<data;
 }
 */
 void func(int a){
 cout<<"I am the first func()"<<a<<endl;
 }

 template<class T>
 void func(T a){
 cout<<"I am your templatised function"<<endl;
 }

int main()
{
    //anurag<float> h(5.7);
    //anurag<int> h(5);
    //anurag<char> h('d');
    //h.display();
     func(4); //Exact match takes the higher priority
    return 0;
}
