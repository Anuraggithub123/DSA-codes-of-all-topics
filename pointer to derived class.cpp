#include <iostream>

using namespace std;
class Baseclass{
public:
    int var_base;
    void display(){
    cout<<"Displaying the base class variable var_base: "<<var_base<<endl;
    }
};

class Derivedclass:public Baseclass{
public:
    int var_derived;
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

    base_class_ptr->var_base=34;
   // base_class_ptr->var_derived = 96;    This will not work as base class pointer cannot access the function
   base_class_ptr->display();        //It will only call the base class pointer
   Derivedclass *derived_class_ptr;
   derived_class_ptr=&obj_derived;
   derived_class_ptr->var_base=3400;
   derived_class_ptr->var_derived=9600;
   derived_class_ptr->display();
    return 0;
}
