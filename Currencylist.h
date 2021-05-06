#pragma once
#include "InfCurrency.h"
#include "Infvariationes.h"
#include "Dollars.h"
#include "Rubles.h"
#include "Krone.h"
using namespace std;


class Currencylist : public InfVariationes
{
private:
	map<string, InfCurrency*> m_money;

public:
	// Default constructor which creating all objects
	Currencylist();

	// Selecting and returning kind of currencies which user have choosed
	InfCurrency* SelectCurrency(string money) override;
};