
/*This is considered an .h file.  This file simplies declares all the functions and variables to be used in the .cpp files. */
// Definition guard
#ifndef BANK_ACCOUNT_H //Include guards that checks for unique value
#include <iostream> //input/output to consol 
#include <string> //string library
using namespace std; 

class BankAccount // declares the bankaccount class
{
private:
	string fname; //declares fname as a private string variable
	string lname; //declares lname as a private string variable
	// double balance;
	int dollars; //declares dollars as a private int variable
	int cents; //declares cents as a private int variable
	double interest_rate; //declares interest_rate as a private double variable

public:
    
	// Constructors
    BankAccount();  // default constructor
	BankAccount(string new_fname, string new_lname);    // secondary constructor




    // Accessors (getters)
	string get_fname() { return fname; } //prints fname
	string get_lname() { return lname; } //prints lname
	int get_dollars() { return dollars; } //prints dollars
	int get_cents() { return cents; } //prints cents
	double get_rate() { return interest_rate; } //prints interest rate

    // Mutators (setters)
	void set_fname(string new_fname) { fname = new_fname; } //sets the variable fname to the new fname
	void set_lname(string new_lname) { lname = new_lname; } //sets the variable lname to the new lname
	void set_dollars(int new_dollars) { dollars = new_dollars; } //sets the variable dollars to the new dollars
 	void set_cents(int new_cents) { cents = new_cents; } //sets the variable cents to the new cents
	void set_rate(double new_rate) { interest_rate = new_rate; } //sets the variable interest_rate to the new rate

	void output(); // declares a function to display the output
	void set();  //declares a function to set all the information
};

#endif