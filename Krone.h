#pragma once
#include "CurrencyBase.h"
using namespace std;

class Krone : public CurrencyBase
	
{
private:
	vector<pair<string, int>> Currency_Krone = { {"EEK", 6}, { "SEK", 10 }, { "DKK", 13 },
	{ "NOK", 10 } };  /* per 100 EUR  */
public:
	// Default constructor, it redirect DOLLARS vector to CurrencyBase
	Krone();

	// Showing menu of dishes
	void Printmoneylist() override;
};