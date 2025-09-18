#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "hello A";
    }
};

class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};  // ✅ no direct A here

int main() {
    D d;
    d.display();  // ✅ unambiguous now
    return 0;
}
