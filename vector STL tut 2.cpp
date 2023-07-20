#include <iostream>
#include <vector>


using namespace std;

void display(vector<int> &v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    //cout<<v.at(i)<<" ";   Same thing as above
}
cout<<endl;
}
int main()
{
    vector<int> vec1;
    int element,Size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>Size;
    for(int i=0;i<Size;i++){
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);  //adds element to the vector
    }
    //vec1.pop_back(); removes the last element
    display(vec1);
    //creating an iterator
    vector<int> :: iterator iter = vec1.begin();  //means pointing from the start
    //vec1.insert(iter,566);   // It will insert 566 to the beginning
    //vec1.insert(iter+1,566); // It will start one place after the beginning
    vec1.insert(iter,50,566);   //It will insert 50 566s in the beginning
    display(vec1);
    return 0;
}
