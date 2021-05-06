#pragma once
#include "CurrencyBase.h"
using namespace std;

class Rubles : public CurrencyBase
{
private:
	vector<pair<string, int>> Currency_Rubles = { { "RUB", 1 }, { "BYN", 32} };  /* per 100  */
public:
	// Default constructor, it redirect Rubles vector to currencyBase
	Rubles();

	// Showing list of rubles
	void Printmoneylist() override;
};