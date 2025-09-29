#include <iostream>
using namespace std;

class A {
public:
    void msgA() { cout << "Class A" << endl; }
};
class B : public A {
public:
    void msgB() { cout << "Class B" << endl; }
};
class C : public B {
public:
    void msgC() { cout << "Class C" << endl; }
};

int main() {
    C obj;
    obj.msgA();
    obj.msgB();
    obj.msgC();
}
