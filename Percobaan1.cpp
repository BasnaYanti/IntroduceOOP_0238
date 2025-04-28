#include <iostream>
using namespace std;

class Planet
{
    private:
            float gravitasi;
    public:
    string nama;
    float diameter;

    void displaydata()
    {
        cout << "Hallo aku bumi" << nama << ", ukuranku " << diameter << ",gravitasiku " << gravitasi << endl;

    }
    void setdata(float g)
    {
        gravitasi = g;
    }
};

int main()
{
    
}