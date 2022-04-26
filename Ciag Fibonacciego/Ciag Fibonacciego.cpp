#include <iostream>
#include <chrono>
using namespace std;

chrono::duration<double> elapsed_seconds;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int a;
    cout << "Ile wyrazow ciagu wypisac: ";
    cin >> a;

    chrono::system_clock::time_point start = chrono::system_clock::now();	// czas start

    for(int i = 0; i < a; i++)
    {
        cout << i + 1 << ". " << fibonacci(i) << endl;
    }

    chrono::system_clock::time_point end = chrono::system_clock::now(); // czas stop

    elapsed_seconds += end - start;	// obliczenie czasu
    cout << "\nCzas: " << endl;
    // wyswietlenie czasu w roznych jednostkach
    cout << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "\t milliseconds\n";
    cout << std::chrono::duration_cast<std::chrono::seconds>(elapsed_seconds).count() << "\t seconds\n";
    //cout <<  elapsed_seconds.count() << " second" << endl;
    cout << std::chrono::duration_cast<std::chrono::minutes>(elapsed_seconds).count() << "\t minutes\n";
}
