#include "Budget.h"

Budget::Budget(double iInc) {
	totalIncome = iInc; }

double Budget::GetIncome() {
	return totalIncome; }

void Budget::SetIncome(double nInc) {
	totalIncome = nInc; }

void Budget::AddCategory(SpendingCategory& nCat) {
	categories.push_back(new SpendingCategory(nCat)); }