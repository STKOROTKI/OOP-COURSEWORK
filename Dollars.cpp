#include "Dollars.h"
using namespace std;

Dollars::Dollars()
{
	Set_Currencies_Cost(Currency_Dollars);
}

void Dollars::Printmoneylist()
{
	cout << "List: ";
	for (int i = 0; i < Currency_Dollars.size(); i++) {
		cout << Currency_Dollars[i].first << " ";
	}
	cout << endl;
}

// Polymorphism
double Dollars::CalculateCost(string currency, int amount)
{
	for (int i = 0; i < Get_Currensy_Cost().size(); i++) {
		if (currency == Get_Currensy_Cost()[i].first) {
			SumOfCost = (Get_Currensy_Cost()[i].second / 100) *amount;
			return SumOfCost;
		}
	}
}