#include <iostream>


using namespace std;

class CWA{
protected:
    string title;
    float rating;
public:
    CWA(string s,float r){
    title = s;
    rating = r;
    }
    virtual void display();
};

class CWAvideo : public CWA{
float videolength;
public:
    CWAvideo(string s,float r,float vl):CWA(s,r){
    videolength = vl;
    }
    void display(){
    cout<<"This is an amazing movie with title "<<title<<endl;
    cout<<"It's rating is : "<<rating<<" out of 5 stars"<<endl;
    cout<<"The length of the video is: "<<videolength<<endl;
    }
};
class CWAtext : public CWA{
int words;
public:
    CWAtext(string s,float r,int w):CWA(s,r){
    words = w;
    }
    void display(){
    cout<<"This is an amazing movie with title "<<title<<endl;
    cout<<"It's rating is : "<<rating<<" out of 5 stars"<<endl;
    cout<<"No. of text in this video is: "<<words<<endl;
    }
};

int main()
{
    string title;
    float rating,videolength;
    int words;

    //for code of video
    title = "Dragon code";
    rating = 4.56;
    videolength = 11.53;
    CWAvideo djvideo(title,rating,videolength);
    //djvideo.display();

    //for code of text
    title = "Dragon code";
    rating = 4.56;
    words = 4500;
    CWAtext djtext(title,rating,words);
    //djtext.display();

    //WE can also display like this
    CWA *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}



/*
Rules for virtual function:-
1.They cannot be static.
2.They are accessed by object pointers.
3.Virtual functions can be a friend of another class.
4.A virtual function in base class might not be used.
5.If a virtual class is defined in a base class there is no necessity of defining it again in the derived class.
*/
