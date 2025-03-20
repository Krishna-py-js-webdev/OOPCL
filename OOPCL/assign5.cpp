#include <iostream>
#include <string>

using namespace std;

//Write a program to find Area of and Volume of 3D objects using Multiple inheritance
//Multiple Inheritance - from many to one 

//I want to achieve => getData as a common parent class which will get inherited by area and vol class everytime
class getData{
    public:
    int l,b,h;
    getData(int l,int b,int h){
        cin>>l;
        cin>>b;
        cin>>h;
        this->l = l;
        this->b= b;
        this->h = h;
  

    }
};
class printData{
    public:
    printData(int l,int b, int h){
        cout<<l<<endl<<b<<endl<<h<<endl;
    }
};
class Area:public getData{
    public:
    int choice;
    void getData::getData();
    Area(){
    cout<<"enter case";
     switch(choice){
      case 1:
      cout<<"happy";
     }
    }

};
int main(){

Area area;

return 0;
}
