#include <iostream>
#include <string>

using namespace std;

class Member
{
public:
    float arr[50];
    int n;
    Member(int size)
    {
        n = size;
    }
    void inputVal()
    {
        cout << "Enter the elements of the Array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    float avgVal()
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
        }
        float avg = sum / n;
        return avg;
    }
};
int main(){
    int n;
    cout<<"Enter the size of the array";
    Member m1(n);
    m1.inputVal();
    cout<<m1.avgVal();
    return 0;
}