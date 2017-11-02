#include <iostream>

using namespace std;

class Base
{
public:      
    Base() {cout << "Construct Base object\n"; }
    ~Base() {cout << "Destruct Base object\n"; }

    void func() { cout << "Function func() of class Base\n"; }
};

class Child: public Base
{
public:
    Child() { cout << "Construct Child object\n"; }
    ~Child() { cout << "Destruct Child object\n"; }
};

int main()
{
    Base base;
    Child child;

    return 0;
}
