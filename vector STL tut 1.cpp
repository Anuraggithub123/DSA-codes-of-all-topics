#include <iostream>
#include <vector>

using namespace std;

template<class T>
void display(vector<T> &v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    //cout<<v.at(i)<<" ";   Same thing as above
}
cout<<endl;
}
int main()
{
    //Ways to create a vector
    vector<int> vec1; //zero length integer vector
    vector<char> vec2(4); //4 element character vector
    vector<char> vec3(vec2); //4 element character vector from vector 2
    vector<int> vec4(6,3); //6 element vector of 3s
    display(vec4);
    return 0;
}
