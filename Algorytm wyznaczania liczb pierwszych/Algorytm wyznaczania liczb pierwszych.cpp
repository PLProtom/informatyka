#include <iostream>
using namespace std;

int main()
{
    int n;
    int lp = 0;
    int p = 2;
    int d = 2;
    bool pierwsza = false;
    cout << "Ile liczb pierwszych wyswietlic?\n";
    cin >> n;
    cout << "Liczby pierwsze: ";

    while (lp < n)
    {
        for (int d = 2; d != p - 1; d++)
        {
            if (p % d != 0)
            {
                cout << p;
            }

        }
        lp++;
        p++;
    }
}
