#include "Krone.h"
using namespace std;

Krone::Krone()
{
	Set_Currencies_Cost(Currency_Krone);
}

void Krone::Printmoneylist()
{
	cout << "List:";
	for (int i = 0; i < Currency_Krone.size(); i++) {
		cout << Currency_Krone[i].first << " ";
	}
	cout << endl;
}