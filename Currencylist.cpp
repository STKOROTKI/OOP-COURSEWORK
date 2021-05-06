#include "Currencylist.h"
using namespace std;

Currencylist::Currencylist()
{
	m_money.insert(make_pair("Dollars", new Dollars()));
	m_money.insert(make_pair("Rubles", new Rubles()));
	m_money.insert(make_pair("Krona", new Krone()));
	

	cout << "Kinds of currencies: ";
	for (auto elem : m_money) {
		cout << elem.first << " ";
	}
	cout << endl;
}

InfCurrency* Currencylist::SelectCurrency(string money)
{
	for (auto elem : m_money) {
		if (money == elem.first) {
			return elem.second;
		}
	}
}