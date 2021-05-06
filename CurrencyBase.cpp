#include "CurrencyBase.h"
using namespace std;

// Default constructor for creating object
CurrencyBase::CurrencyBase() { }

// For calculating amount of money. All currencies classes used it, except Dollars class (Polymorphism)
//virtual double CalculateCost(string& currency, int& amount) = 0;
double CurrencyBase::CalculateCost(string currency, int amount)
{
    for (int i = 0; i < Currencies_Cost.size(); i++) {
        if (currency == Currencies_Cost[i].first) {
            SumOfCost = (Currencies_Cost[i].second /100) * amount;
            return SumOfCost;
        }
    }
}

// Gets and Sets
vector<pair<string, double>> CurrencyBase::Get_Currensy_Cost() { return Currencies_Cost; }
int CurrencyBase::GetSumOfCurrencies() { return SumOfCost; }

void CurrencyBase::Set_Currencies_Cost(vector<pair<string, int>>& Currencies)
{
    for (int i = 0; i < Currencies.size(); i++) {
        Currencies_Cost.push_back(make_pair(Currencies[i].first, Currencies[i].second));
    }
}

// Operator overloading for summing all currencies
InfCurrency& CurrencyBase::operator+=(InfCurrency* obj)
{
    SumOfCost += obj->GetSumOfCurrencies();
    return *this;
}

// Showing currencies list 
void CurrencyBase::Printmoneylist()
{
    for (int i = 0; i < Currencies_Cost.size(); i++) {
        cout << Currencies_Cost[i].first << " ";
    }
}