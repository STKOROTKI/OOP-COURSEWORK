#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

class InfCurrency
{
protected:
	int SumOfCost = 0;
public:
	virtual double CalculateCost (string currency, int amount) = 0;
	virtual void Printmoneylist() = 0;
	virtual InfCurrency& operator+=(InfCurrency* obj) = 0;

	// Gets and Sets
	virtual vector<pair<string, double>> Get_Currensy_Cost() = 0;
	virtual void Set_Currencies_Cost(vector<pair<string, int>>& Currencies) = 0;
	virtual int GetSumOfCurrencies() = 0;
};