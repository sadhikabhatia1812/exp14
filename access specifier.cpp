#include <iostream>
using namespace std;

class Base {
protected:
    int x;
public:
    Base() { x = 10; }
};
class Derived : public Base {
public:
    void display() { cout << "Value of x = " << x << endl; }
};

int main() {
    Derived d;
    d.display();
}
