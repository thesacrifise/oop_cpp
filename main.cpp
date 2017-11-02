#include <iostream>

using namespace std;
void hleb(int a, int b){cout << a*b;}
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
    int c, d;
    cout <<"c="; cin >>c;
    cout <<"d="; cin >>d;
    hleb(c, d);
    return 0;
}
