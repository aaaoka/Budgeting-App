#pragma once
#include <vector>
using namespace std;
#include "SpendingCategory.h"

class Budget {
	public:
		Budget(double iInc);
		double GetIncome();
		void SetIncome(double nInc);
		void AddCategory(SpendingCategory& nCat);
	private:
		double totalIncome;
		vector<SpendingCategory*> categories; };