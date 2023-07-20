#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
   //Writing in a file
    ofstream out;
    out.open("sample.txt");
    out<<"This is me\n";
    out<<"Bas coding chal rahi h";
    out.close();

    //Reading a file
    ifstream in;
    string s,s1;
    in.open("sample.txt");
    //in>>s>>s1;
    //cout<<s<<s1;
    while(in.eof()==0){
        getline(in,s);
        cout<<s<<endl;
    }
    return 0;
}
