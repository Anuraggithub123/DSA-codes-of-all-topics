#include <iostream>

using namespace std;
/*
float funcaverage(int a,int b){
float avg = (a+b)/2;
return avg;
}

float funcaverage2(int a,float b){
    float avg = (a+b)/2;
    return avg;
}

Here if we have to use int or float we always have to change the data type, so for easy purpose we use templates which can be done only using one function
*/

template<class T1,class T2>
float funcaverage2(T1 a,T2 b){
float avg = (a+b)/2;
return avg;
}

template<class T>
void swapp(T &a,T &b){
T temp = a;
a = b;
b = temp;
}
int main()
{
    float a;
    a = funcaverage2(5,2.4);
    cout<<"The average of the numbers is: "<<a<<endl;
    int x= 5;
    int y = 6;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}
