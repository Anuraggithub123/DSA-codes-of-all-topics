#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst){
list<int> :: iterator it;
for(it=lst.begin();it!=lst.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
}

int main()
{
    list<int>list1; //List of 0 length
    //list<int>list2(7)  Empty list of size 7
    list1.push_back(8);
    list1.push_back(7);
    list1.push_back(13);
    list1.push_back(11);
    list1.push_back(5);

    //we will make an iterator
   /* list<int> :: iterator iter = list1.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    */
    //Inspite of doing this all we will make an display function

    display(list1);
    // Removing elements from the list:-
    // list1.pop_back();  used to delete the last element of the list.
    //list1.pop_front();  used to delete the element from the beginning of the list.
    //list1.remove(11);   used to remove the specific element in the parenthesis from the list.

    //Sorting the list
    list1.sort();
    display(list1);

    list<int>list2(3);
    list<int> :: iterator iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    display(list2);

    list2.sort();
    display(list2);

    list1.merge(list2);
    cout<<"List 1 after merging will be: "<<endl;
    display(list1);

    list1.reverse();
    display(list1);
    return 0;
}
