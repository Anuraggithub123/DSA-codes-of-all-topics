#include <iostream>

using namespace std;

template<class T>
class Vector{
public:
    T *arr;
    int Size;
    Vector(int m){
    Size=m;
    arr = new T[Size];
    }
    T dotproduct(Vector &v){
    T d=0;
    for(int i=0;i<Size;i++){
        d = d + this->arr[i] * v.arr[i];
    }
    return d;
    }

};

int main()
{
   Vector <float>v1(3);
   v1.arr[0] = 4.1;
   v1.arr[1] = 3.2;
   v1.arr[2] = 2.3;
   Vector <float>v2(3);
   v2.arr[0] = 3.1;
   v2.arr[1] = 2.2;
   v2.arr[2] = 1.3;
   float a = v1.dotproduct(v2);
   cout<<a<<endl;
   return 0;
}
