#pragma once
#include <string>
using namespace std;
#include "Transaction.h"

class SpendingCategory {
public:
	//constructor
	//add purchase
private:
	string categoryName;
	double allocatedAmount;
	double amountSpent;
	vector<Transaction> transactions; };