#include <iostream>
using namespace std;
class Student{
    public:
    int roll_no;
    char name[30];
    char dept[100];
    
    private:
    void student_info(){
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The roll no. of the student is: "<<roll_no<<endl;
    cout<<"The dept of the student is: "<<dept<<endl;
    }
};



int main(){
    Student obj; //We call an object referring to the class Student defined above.
    cout<<"Enter the name of the student";
    cin>>obj.name; //Ensure that input is in the format w/o spaces.
    cout<<"Enter the roll of the student";
    cin>>obj.roll_no; // We call particular blank space to be filled in the class defined.
    cout<<"Enter the dept of the student";
    cin>>obj.dept;
    
    obj.student_info(); //We call out the member function of the class And here, it prints out the variables. 
    
    return 0;
}
