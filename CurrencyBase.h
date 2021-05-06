#pragma once
#include "InfCurrency.h"
using namespace std;

class CurrencyBase : public InfCurrency
{
protected:
	// Vector with currencies of user's kind of currencies
	vector<pair<string, double>> Currencies_Cost;

protected:
	//int SumOfCost = 0;
	// Calculation sum of money. All currencies classes are used it, except Dollars (Polymorphism)
	double CalculateCost(string currency, int amount) override;

	//Gets and Sets
	vector<pair<string, double>> Get_Currensy_Cost() override;
	void Set_Currencies_Cost(vector<pair<string, int>>& Currencies) override;  // Initializing currency cost vector
	int GetSumOfCurrencies() override;

public:
	// Constructor for creating object
	CurrencyBase();

	// Operator overloading for summing currencies
	InfCurrency& operator+=(InfCurrency* obj) override;

	// Showing currency list depending on kind of currencies chosed by user 
	void Printmoneylist() override;
};
