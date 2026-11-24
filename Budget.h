#pragma once

#include <vector>
using namespace std;
#include "SpendingCategory.h"

class Budget {
	public:
		//constructor
		//set income
		//get income
		//add spending categories
	private:
		double totalIncome;
		vector<SpendingCategory*> categories; };