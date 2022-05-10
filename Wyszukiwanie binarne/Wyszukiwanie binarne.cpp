#include <iostream>
using namespace std;

int szukaj(int szukana, int tab[15])
{
    int l, p, sr;

    l = 0;
    p = 15;
    sr = (l + p) / 2;
    while (l <= p)
    {
        if (tab[sr] == szukana)
        {
            return sr;
        }
        else if (tab[sr] > szukana)
        {
            p = sr - 1;
        }
        else
        {
            l = sr + 1;
        }
    }
}

int main()
{
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int szukana;

    cout << "Podaj szukana liczbe:\n";
    cin >> szukana;
    cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << szukaj(szukana, tab) << endl;
}
