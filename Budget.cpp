#include "Budget.h"

Budget::Budget(double iInc) {
	totalIncome = iInc; }

Budget::~Budget() {
	for (SpendingCategory* category : categories) {
		delete category; }
	categories.clear(); }

double Budget::GetIncome() {
	return totalIncome; }

void Budget::SetIncome(double nInc) {
	totalIncome = nInc; }

void Budget::AddCategory(SpendingCategory& nCat) {
	categories.push_back(new SpendingCategory(nCat)); }