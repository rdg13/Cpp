#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount()
{
	cout << "Constructor is called.\n";
	fname = lname = "";
	dollars = cents = 0;
	interest_rate = 0.0;
}

BankAccount::BankAccount(string new_fname, string new_lname)
{
	cout << "Secondary constructor is called.\n";
	fname = new_fname;
    lname = new_lname;
	dollars = cents = 0;
	interest_rate = 0.0;
}


void BankAccount::output()
{
	cout << "First name: " << fname << endl
		<< "Last name: " << lname << endl
		<< "Balance: " << dollars + cents*0.01 << endl
		<< "Interest rate: " << interest_rate << endl;
}

void BankAccount::set()
{
	cout << "Please enter first name: ";
	cin >> fname;
	cout << "Please enter last name: ";
	cin >> lname;
	cout << "Please enter dollars: ";
	cin >> dollars;
	cout << "Please enter cents: ";
	cin >> cents;
	cout << "Please enter interest rate: ";
	cin >> interest_rate;
	cout << "Information is set.\n";
}