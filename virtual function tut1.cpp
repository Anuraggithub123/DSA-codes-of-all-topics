#include <iostream>

using namespace std;
class Baseclass{
public:
    int var_base = 5;
    virtual void display(){
    cout<<"Displaying the base class variable var_base: "<<var_base<<endl;
    }
};

class Derivedclass:public Baseclass{
public:
    int var_derived = 6;
    void display(){
    cout<<"Displaying the base class variable: "<<var_base<<endl;
    cout<<"Displaying the derived class variable: "<<var_derived<<endl;
    }
};

int main()
{
    Baseclass *base_class_ptr;
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_ptr=&obj_derived; //Pointing base class pointer to the derived class
    base_class_ptr->display();
    /*Here this display will always display */
    return 0;
}
