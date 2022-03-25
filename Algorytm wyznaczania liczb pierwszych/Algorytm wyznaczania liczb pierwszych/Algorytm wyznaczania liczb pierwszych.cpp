#include <iostream>
using namespace std;

int main()
{
    int n, lp, d, p;
    bool pierwsza;
    p = 2;
    lp = 0;

    cout << "Ile liczb pierwszych wyswietlic?\n";
    cin >> n;
    cout << "Liczby pierwsze: ";

    while (lp < n)
    {
        pierwsza = true;
        for (d = 2; d < p; d++)
        {
            if (p % d == 0)
            {
                pierwsza = false;
                break;
            }
        }

        if (pierwsza)
        {
            cout << p << " ";
            lp++;
        }
        p++;
    }
}