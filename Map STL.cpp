#include <iostream>
#include <map>
#include <string>

using namespace std;

void display(map<string,int> &marksm){
map<string,int> :: iterator iter;
for(iter=marksm.begin();iter!=marksm.end();iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<endl;
}
}

int main()
{
   map<string,int> marksmap;
   marksmap["Anurag"] = 95;
   marksmap["Sparsh"] = 85;
   marksmap["Shaurya"] = 86;
   marksmap["Adwitiya"] = 85;
   marksmap["Sanskar"] = 75;
   marksmap.insert({{"Kanishk",78},{"Aryan",65}});
   display(marksmap);

cout<<"The size of the map is: "<<marksmap.size()<<endl;
cout<<"The maximum size of the map is: "<<marksmap.max_size()<<endl;
cout<<"The empty return value of the map is: "<<marksmap.empty()<<endl;
    return 0;
}
