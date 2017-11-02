#include <iostream>

using namespace std;

class Base
{
public:
    Base() { cout << "Construct Base object\n"; }
    ~Base() { cout << "Destruct Base object\n"; }
};

int main(int argc, char *argv[])
{
    for(int i=0; i<10; ++i){ cout <<endl;
	for(int j=10; j>i; --j) { cout <<"$" <<" ";}
	}
    cout << "* Create Object base" << endl;
    Base base;

    return 0;
}
