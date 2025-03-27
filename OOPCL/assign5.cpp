#include <iostream>
#include <string>

using namespace std;

// Write a program to find Area of and Volume of 3D objects using Multiple inheritance
// Multiple Inheritance - from many to one

// I want to achieve => getData as a common parent class which will get inherited by area and vol class everytime
class getData
{
public:
    int l, b, h;
    getData(int l, int b, int h)
    {
        // cin>>l;
        // cin>>b;
        // cin>>h;
        // we already pass variables - no need to cin the vals
        this->l = l;
        this->b = b;
        this->h = h;
    }
};
class printData
{
public:
    void printdata(float result)
    {
        cout << result << endl;
    }
};

class Area : public getData, public printData
{
public:
    int choice;
    float res = 0.00;
    Area(int a, int b, int c) : getData(a, b, c)
    {
        cout << "enter case: 1.Sphere , 2.Cubiod , 3.Cube\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
            res = 4 * 3.142 * a * a;
            this->printdata(res);
            break;
        case 2:
            res = 2 * (a * b + b * c + a * c);
            this->printdata(res);
            break;
        case 3:
            res = 2 * (a * b + b * c + a * c);
            this->printdata(res);
            break;
        default:
            cout << "ok";
        }
    }
};

class Volume : public getData, public printData
{
public:
    int choice;
    int res = 0;
    Volume(int a, int b, int c) : getData(a, b, c)
    {

        cout << "enter case: 1.Sphere , 2.Cubiod , 3.Cube\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            res = (4 / 3) * 3.142 * a * a * a;
            this->printdata(res);
            break;
        case 2:
            res = a * b * c;
            this->printdata(res);
            break;
        case 3:
            res = a * a * a;
            this->printdata(res);
            break;
        default:
            cout << "ok";
        }
    }
};
class Intialize
{
private:
    int choice;

public:
    int Intializer()
    {
        cout << "1. Area 2. Volume \n";
        cin >> choice;
        return choice;
    }
};
int main()

{
    int choice;
    Intialize intial;
    choice = intial.Intializer();
    if (choice == 1)
    {
        int a, b, c;
        cout << "enter dimensions\n";
        cin >> a >> b >> c;
        Area area(a, b, c);
    }
    if (choice == 2)
    {
        int a, b, c;
        cout << "enter dimensions\n";
        cin >> a >> b >> c;
        Volume(a, b, c);
    }

    return 0;
}
