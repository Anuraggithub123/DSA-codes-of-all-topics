#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
//Function Objects(Functors) -> Function wrapped in a class so that it is available like an object.
int main()
{
    int arr[] = {73,5,8,2,6,4,1};
   // sort(arr,arr+5);   //arr+5 means it will sort only first 5 elements.
    sort(arr,arr+5,greater<int>());  //greater is a function object which will sort it in descending order.
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
