#include <iostream>
using namespace std;
class Student{
    private:
    int roll_no;
    char name[30];
    char dept[100];
    char test[10] = "Hello!";
    public:
    void get_data(){
    cout<<"Enter the Name of the Student"<<endl;
    cin>>name;
    cout<<"Enter the Roll of the Student"<<endl;
    cin>>roll_no;
    cout<<"Enter the dept of the Student"<<endl;
    cin>>dept;
    }
    void student_info(){ //This is called as member function
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The roll no. of the student is: "<<roll_no<<endl;
    cout<<"The dept of the student is: "<<dept<<endl;
    }
};

/*
if we put both private - function and the data members or function as private;

firstpgm.cpp: In function ‘int main()’:
firstpgm.cpp:27:18: error: ‘void Student::get_data()’ is private within this context
   27 |     obj.get_data();
      |                  ^
firstpgm.cpp:9:10: note: declared private here
    9 |     void get_data(){
      |          ^~~~~~~~
firstpgm.cpp:28:22: error: ‘void Student::student_info()’ is private within this context
   28 |     obj.student_info(); //We call out the member function of the class And here, it prints out the variables.
      |                      ^
firstpgm.cpp:17:10: note: declared private here
   17 |     void student_info(){
*/


int main(){
    Student obj;
    obj.get_data();
    obj.student_info();
    
    //We call out the member function of the class And here, it prints out the variables. 
    
    //We call an object referring to the class Student defined above.
    /*cout<<"Enter the name of the student";
    cin>>obj.name; //Ensure that input is in the format w/o spaces.
    cout<<"Enter the roll of the student";
    cin>>obj.roll_no; // We call particular blank space to be filled in the class defined.
    cout<<"Enter the dept of the student";
    cin>>obj.dept;
    
    => The code here returns error -> data members can't be operated outside the class, as its private;
    */
    
    /*cout<<obj.test;*/ //output - hello - as data members are "public" in the class; But where as if functions are declared in private then it shows error.
    
    return 0;
}
