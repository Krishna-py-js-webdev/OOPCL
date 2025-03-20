#include <iostream>
using namespace std;

class Calc {
private:
    int choice;
public:
    void area() {
        cout << "Enter choice - 1. Rect 2. Circle 3. Triangle: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                float length, breadth;
                cout << "Enter length and breadth: ";
                cin >> length >> breadth;
                cout << "Area of Rectangle: " << length * breadth << endl;
                break;
            }
            case 2: {
                float radius;
                const double pi = 3.142;
                cout << "Enter the radius: ";
                cin >> radius;
                cout << "Area of Circle: " << pi * radius * radius << endl;
                break;
            }
            case 3: {
                float base, height;
                cout << "Enter base and height: ";
                cin >> base >> height;
                cout << "Area of Triangle: " << 0.5 * base * height << endl;
                break;
            }
            default:
                cout << "Enter a valid choice!" << endl;
        }
    }
};

int main() {
    Calc shape;
    shape.area();
    return 0;
}

