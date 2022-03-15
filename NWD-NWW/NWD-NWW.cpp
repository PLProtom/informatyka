#include <iostream>
using namespace std;

int a = 0;
int b = 0;
int iloczyn = 0;
int x = 0;
int y = 0;
int nww = 0;

// Najwiekszy wspolny dzielnik
int NWD()
{
    cout << "Podaj pierwsza licze: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    x = a;
    y = b;

    while (a != b) 
    {
        if (a < b)
        {
            b = b - a;
        }
        else
        {
            a = a - b;
        }
    }
    return a;
}

// Najmniejsza wspolna wielokrotnosc
int NWW()
{
    iloczyn = x * y;
    nww = iloczyn / a;
    return nww;
}

int main()
{
    NWD();
    cout << "Najwiekszy wspolny dzielnik: " << a << endl;
    NWW();
    cout << "Najmniejsza wspolna wielokrotnosc: " << nww << endl;
}