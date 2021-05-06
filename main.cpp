#include "InfCurrency.h"
#include "Infvariationes.h"
#include "CurrencyBase.h"
#include "Currencylist.h"
using namespace std;

void Intro()
{
    cout << "     Money convertor (your account currency is: EUR)" << endl << endl;
    cout << "How many currencies do you want to convert?" << endl << endl;
    cout << ">> ";
}

int main()
{
    // Interface of the program
    Intro();
    int steps;
    cin >> steps;
    cout << endl;

    // First part - writing which amount of money user wants to withdraw
    // Object for summing currencies
    InfCurrency* sum = new CurrencyBase();

    for (int i = 0; i < steps; i++) {
        // Declaring variables
        string kind_of_currency;
        string currency;
        int amount;

        // currencies variations 
        InfVariationes* currencylist = new Currencylist();
        cin >> kind_of_currency;
        InfCurrency* money = currencylist->SelectCurrency(kind_of_currency);
        money->Printmoneylist();

        // Input & Calculations
        cout << "Enter currency from the list: ";
        getline(cin, currency);
        getline(cin, currency);
        cout << "Enter amount: ";
        cin >> amount;

        // Output
        money->CalculateCost(currency, amount); 
        // Summing amount of money in one object
        sum->operator+=(money);
        cout << "Converted in total in account currency: " << sum->GetSumOfCurrencies() << " EUR";

        // End of the cycle
        cout << endl << "Amount in a new currency: " << amount << " " << currency << endl<<endl;
    }
}