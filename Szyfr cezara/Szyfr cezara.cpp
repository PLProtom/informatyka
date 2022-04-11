#include <iostream>
using namespace std;

void szyfr(int klucz, char tab[])
{
	int dl = strlen(tab);

	if (!(klucz >= -26 && klucz <= 26)) return; // sprawdzanie zakresu
	if (klucz >= 0)
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz <= 'z')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz - 26;
	else
		for (int i = 0; i < dl; i++)
			if (tab[i] + klucz >= 'a')
				tab[i] += klucz;
			else
				tab[i] = tab[i] + klucz + 26;
}

int main()
{
	char tab[1001];
	int klucz;

	cout << "Podaj wyraz skladajacy sie z malych liter: ";
	cin >> tab;

	cout << "Podaj klucz z przedzialu [-26..26]: ";
	cin >> klucz;

	szyfr(klucz, tab); // szyfrowanie
	cout << "Po zaszyfrowaniu: " << tab << endl;

	szyfr(-klucz, tab); // deszyfrowanie
	cout << "Po rozszyfrowaniu: " << tab << endl;
}