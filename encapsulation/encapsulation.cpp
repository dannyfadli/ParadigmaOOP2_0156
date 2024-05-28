#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNo[10];

public:
    void setSaklarno(int i, string value)
    {
        saklarNo[i] = value;
    }
    string getSaklarNo(int i)
    {
        return saklarNo[i];
    }
};


int main()
{
    remoteLampu lampuRumah;
    lampuRumah.setSaklarno(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarno(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarno(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarno(3, "Lampu Dapur");

    cout << lampuRumah.getSaklarNo(0) << endl;
    cout << lampuRumah.getSaklarNo(1) << endl;
    cout << lampuRumah.getSaklarNo(2) << endl;
    cout << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}
