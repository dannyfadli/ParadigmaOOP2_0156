#include <iostream>
using namespace std;

class seseorang
{
public:
    //virtual function
    virtual void pesan() = 0;
    //virtual functiom biasa
    
    /*virtual void pesan() 
    {
        cout << "Pesan dari seseorang" << endl;
    }*/
};

class joko : public seseorang
{
public:
    //deklarasi
    void pesan()
    {
        //implementasi
        cout << "Pesan dari joko" << endl;
    }
};

class lia : public seseorang
{
public:
    void pesan()
    {
        cout << "Pesan dari Lia" << endl;
    }
};

int main()
{
    seseorang* objek;
    joko a;
    lia b;
}
