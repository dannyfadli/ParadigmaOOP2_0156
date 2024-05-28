#include <iostream>
using namespace std;

class baseClass /*final*/
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya dari function base class";
    }
};

class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya dari funtion derived class";
    }
};

int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}

