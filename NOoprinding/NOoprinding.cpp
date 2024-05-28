#include <iostream>
using namespace std;

//class parent
//tambahkan final sesudah nama class
//untuk mencegah adanya overrinding

class baseclass
{
public:
    virtual void perkenalan()
    {
        cout << "Hallo saya function dari base class";
    }
};

class derivedClass : public baseclass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya funtiom dari derived Class";
    }
};

int main()
{
    
}
