                                                    //SOME IMPORTANT DSA QUESTIONS

  #include <iostream>

using namespace std;

  //ARRAY
 //1.)  REVERSE AN ARRAY
/*#include <iostream>

using namespace std;

void reversearray(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    else{
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        reversearray(arr,start+1,end-1);
    }
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arrr[]={2,3,4,5,6,7};
    printarray(arrr,6);
    reversearray(arrr,0,5);
    printarray(arrr,6);
    return 0;
}*/

//2) FIND THE MAXIMUM AND MINIMUM ELEMENT IN A array
int findmax(int arr[],int Size){
int temp;
for(int i=0;i<Size;i++){
    if(arr[i]>arr[i+1]){
        temp=arr[i];
    }
        return temp;
}
}
int main(){
int arr[] = {5,55,23,66,56,89};
findmax(arr,6);
}
