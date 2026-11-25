#pragma once
#include <string>
using namespace std;

class Transaction {
public:
	Transaction(string iDesc, double iAmt);
	string GetDescription();
	double GetAmount();
private:
	string description;
	double amount; };