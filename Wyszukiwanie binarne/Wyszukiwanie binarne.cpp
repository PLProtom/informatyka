#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

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

        sr = (l + p) / 2;
    }
}

int main()
{
    int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    int szukana;

    cout << "Podaj szukana liczbe:\n";
    cin >> szukana;
    chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start
    cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << szukaj(szukana, tab) << endl;


    chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop
    elapsed_seconds += end - start;	// obliczenie czasu
    cout << "\nCzas: " << endl;
    cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
    cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
    cout << std::chrono::duration_cast<std::chrono::minutes>(elapsed_seconds).count() << "\t minutes\n";
}
