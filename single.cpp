#include <iostream>
using namespace std;

class Parent {
public:
    void display() { cout << "This is Parent class" << endl; }
};
class Child : public Parent {
public:
    void show() { cout << "This is Child class" << endl; }
};

int main() {
    Child c;
    c.display();
    c.show();
}
