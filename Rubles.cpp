#include "Rubles.h"
using namespace std;

Rubles::Rubles()
{
	Set_Currencies_Cost(Currency_Rubles);
}

void Rubles::Printmoneylist()
{
	cout << "List: ";
	for (int i = 0; i < Currency_Rubles.size(); i++) {
		cout << Currency_Rubles[i].first << " ";
	}
	cout << endl;
}