#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

int main()
{
	BankAccount account1, account2("Andy","Smith"), account3;
	cout << "Initial output for account1: " << endl;
	account1.output();

	cout << endl << endl;

	account2.output();

	cout << endl << endl;

	account1.set_fname("John");
	account1.set_lname("Doe");
	account1.set_dollars(100);
	account1.set_cents(95);
	account1.set_rate(2.5);
	account1.output();

	account1.set();
	account1.output();

	system("PAUSE");


	return 0;
}