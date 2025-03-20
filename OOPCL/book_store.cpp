// Imagine a publishing company that markets both book and audiocassette versions of its
// works. Create a class publication that stores the title (a string) a price (type float) of a
// publication. From this class derive two classes: book, which adds a page count (type int)
// and tape, which adds a playing time in minutes (type float). Each of these three classes
// should have a get data () function to get its data from the user at the keyboard, and a put
// data () function to display its data.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Publication
{
public:
    string title;
    float price;
    void get_data()
    {
        cout << "ENTER TITLE OF THE BOOK "<<endl;
        getline(cin,title);
        cout << "ENTER PRICE OF THE BOOK "<<endl;
        cin >> price;
    }
     void displayData(){
      cout<<"THE TITLE OF THE BOOK "<<title<<endl;
      cout<<"THE PRICE OF THE BOOK "<<price<<endl;
    }
};

class Book : public Publication
{
private:
    int pageCount;
public:
    void getPageCount(){
      Publication::get_data();
      cout<<"Enter Page Count "<<endl;
      cin>>pageCount;
    }
     void displayData(){
      Publication::displayData();
      cout<<"Page count is: "<<pageCount<<endl;
    }
};

class Tape : public Publication
{
private:
    float audioTime;
public:
    void getaudioTime(){
      Publication::get_data();
      cout<<"Enter audio time "<<endl;
      cin>>audioTime;
    }
    void displayData(){
      Publication::displayData();
      cout<<"Tape duration is: "<<audioTime<<endl;
    }
};
int main()
{   
    Book book;
    book.getPageCount();
    book.displayData();
    cout<<"/------------------------------------------------/"<<endl;
    Tape tape;
    tape.getaudioTime();
    tape.displayData();
    return 0;
}
