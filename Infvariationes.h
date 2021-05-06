#pragma once
#include "InfCurrency.h"
#include <map>

class InfVariationes
{
public:
	virtual InfCurrency* SelectCurrency(string money) = 0;
};
