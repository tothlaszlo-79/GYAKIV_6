#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int db = 0;
	cout << "Az egeszek szama (pozitiv egesz): ";
	cin >> db;
	if (db < 1)
	{
		cerr << "\nHibas elemszam!\a\n\n\n";
		system("pause"); // cin.ignore();
		return 1;
	}
	else
	{
		int* p = NULL; // mutató definialasa, inicializalasa
		p = new int[db];
		if (p) // ha sikeres a tárfoglalás
		{
			register int i;
			for (i = 0; i < db; i++)
			{
				cout << i + 1 << ". adat: ";
				cin >> p[i];
			}
			cout << endl << "Az adatok:" << endl;
			double s = 0.0;
			for (i = 0; i < db; i++)
			{
				cout << setw(8) << p[i];
				s += p[i];
			}
			cout << endl << "Szamtaniatlaguk: " << s / db << endl;
			system("pause"); // cin.get(); vagy cin.ignore();
			delete[] p; // tarfelszabaditas
			return 0;
		}
		else// ha sikertena tarfoglalas
		{
			cerr << "\nKeves a dinamikus memoria!\a\n\n";
			system("pause"); // cin.ignore();
			return 2;
		}
	}
}