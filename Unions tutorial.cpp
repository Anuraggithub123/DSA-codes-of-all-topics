#include <iostream>

using namespace std;

union money
{
  int rice;  //Suppose it takes 4 bytes
  char car;  //Suppose it takes 1 byte
  float pounds;  //Suppose it takes 4 bytes
};
int main()
{
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice<<endl; //It will give garbage value
    cout<<m1.car<<endl; //It will give garbage value
    return 0;
}

//So by using union function we can save memory and also we can use one thing at one time only
