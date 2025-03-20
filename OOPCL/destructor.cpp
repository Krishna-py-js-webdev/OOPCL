#include <iostream>
#include <string>

using namespace std;

class Student {
   public:
      int roll_no;
      char name[20];
      char branch[20];

      Student();
      ~Student();
      void display_details();
};

Student::Student() {
    cout << "Enter roll no." << endl;
    cin >> roll_no;
    cout << "Enter Name" << endl;
    cin >> name;
    cout << "Enter Branch" << endl;
    cin >> branch;     
}

Student::~Student() {
    cout << "Values of the object have been destroyed!";
}

void Student::display_details() {
    cout << "The Roll No.: " << roll_no << endl;
    cout << "The Name is: " << name << endl;
    cout << "The Branch is: " << branch << endl;
}

int main() {
    Student s1;
    s1.display_details();
    return 0;
}

