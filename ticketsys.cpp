/*
Name: Sabrina Pinera
Date: 09/10/2018
Section: Section 5
Assignment: Assignment #1
About this Project:
	1. To practice with writing a small C++ main() program, along with
	compiling and running it.
	2. To practice with basic C++ input/output features, along with some
	simple decimal formatting
	3. To practice with basic arithmetic operators in C++
Assumptions: assumes correct user input and calculation

All work below was performed by Sabrina Pinera*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double ADULT = 28.50, CHILD = 12.50, SENIOR = 16.50, TAX = 0.07;
	int adult_num, child_num, senior_num;
	double total, total_tax, total_cost;

	cout << "***FSU Football Ticket Calculator***\n";
	cout << "\tTicket Cost\n";
	cout << "\tAdults:                  $28.50\n";
	cout << "\tChildren(up to age 9):   $12.50\n";
	cout << "\tSeniors(55+):            $16.50\n";
	cout << "***********************************\n";
	cout << "Please enter the number of tickets:\n";

	//input from user
	cout << "Adults--> ";
	cin >> adult_num;
	cout << "Children--> ";
	cin >> child_num;
	cout << "Seniors--> ";
	cin >> senior_num;
	cout << "------------------------------\n";

	//calculations
	total = (adult_num * ADULT)+(child_num * CHILD)+(senior_num * SENIOR);
	total_tax = (TAX * total);
	total_cost = (total_tax + total);

	//Output
	cout << fixed << setprecision(2) << "TOTAL(before tax) = $" << total << "\n";
	cout << "Tax = $" << total_tax << "\n";
	cout << "TOTAL COST (after tax) = $" << total_cost << "\n\n";
	cout << "Thanks for using the ticket system!\n";

	return 0;
}
