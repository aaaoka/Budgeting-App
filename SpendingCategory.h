#pragma once
#include <string>
#include <vector>
using namespace std;
#include "Transaction.h"

class SpendingCategory {
public:
	SpendingCategory(string iCName);
	SpendingCategory(string iCName, double iAAmt);
	string GetName();
	void ChangeName(string nCName);
	double GetAllocatedAmount();
	void SetAllocatedAmount(double nAAmt);
	double GetAmountSpent();
	void AddPurchase(Transaction nTrans);
	void RemovePurchase(int index);
	Transaction GetPurchase(int index);
private:
	string categoryName;
	double allocatedAmount;
	double amountSpent;
	vector<Transaction> transactions; };