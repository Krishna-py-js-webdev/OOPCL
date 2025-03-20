#include <iostream>
#include <string>

using namespace std;
class A{
int num;
protected:
void display(){
cout<<num;
}
};
int main(){
A a;
a.num = 100;
a.display();
/*
acess_specifier.cpp: In function ‘int main()’:
acess_specifier.cpp:14:3: error: ‘int A::num’ is private within this context
   14 | a.num = 100;
      |   ^~~
acess_specifier.cpp:6:5: note: declared private here
    6 | int num;
      |     ^~~
acess_specifier.cpp:15:11: error: ‘void A::display()’ is protected within this context
   15 | a.display();
      |           ^
acess_specifier.cpp:8:6: note: declared protected here
    8 | void display(){
      |      ^~~~~~~
*/

return 0;
}
