#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Member
{
public:
    vector<float> arr;
    int n;
    float elts;
    Member(int size)
    {
        n = size;
    }
    void inputVal()
    {
        cout << "Enter the elements of the Array: ";
        for (int i = 0; i < n; i++)
        {   cin>>elts;
            arr.push_back(elts);
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
