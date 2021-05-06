#pragma once
#include "CurrencyBase.h"
using namespace std;

class Dollars : public CurrencyBase
{
private:
	vector<pair<string, int>> Currency_Dollars = { {"USD", 89}, {"AUD", 62},
		{"CAD", 62}, {"SGD", 62} }; /* per 100 EUR */
public:
	// Default constructor, it redirect Dollars vector to CurrencyBase
	Dollars();

	// Showing Currency list
	void Printmoneylist() override;

	// Polymorphism 
	double CalculateCost(string currency, int amount) override;
	
};