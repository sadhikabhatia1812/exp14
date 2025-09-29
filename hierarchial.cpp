#include <iostream>
using namespace std;

class Parent {
public:
    void showParent() { cout << "Parent class" << endl; }
};
class Child1 : public Parent {
public:
    void showC1() { cout << "Child1 class" << endl; }
};
class Child2 : public Parent {
public:
    void showC2() { cout << "Child2 class" << endl; }
};

int main() {
    Child1 c1;
    Child2 c2;
    c1.showParent();
    c1.showC1();
    c2.showParent();
    c2.showC2();
}
