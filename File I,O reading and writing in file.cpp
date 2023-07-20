#include <iostream>
#include<fstream>

using namespace std;
/*
    The useful classes for working with files in c++ are:
    1.fstreambase
    2.ifstream ---> derived from fstreambase
    3.ofstream ---> derived from fstreambase

    In order to work with c++ file, you will have to open it. Primarily, there are 2 ways to open a file:-
    1.Using the constructor
    2.Using the member function open() of the class.
*/

int main()
{
    string st = "Anurag";
    string st2;
    //Opening files using constructor and writing it
    //ofstream out("E:\C++ programming files\sample file for writing and reading File in c++.txt");
    //out<<st;

    //Opening files using constructor and reading it
    ifstream in("sample file for writing and reading File in c++.txt");
    //in>>st2;
    getline(in,st2);
    getline(in,st2);
    cout<<st2;
    return 0;
}
