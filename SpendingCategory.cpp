#include "SpendingCategory.h"
#include <string>
#include <vector>
using namespace std;
#include "Transaction.h"

SpendingCategory::SpendingCategory(string iCName) {
	categoryName = iCName; 
	allocatedAmount = 0.0; 
	amountSpent = 0.0; 
	transactions = {}; }

SpendingCategory::SpendingCategory(string iCName, double iAAmt) {
	categoryName = iCName;
	allocatedAmount = iAAmt; 
	amountSpent = 0.0;
	transactions = {}; }

string SpendingCategory::GetName() {
	return categoryName; }

void SpendingCategory::ChangeName(string nCName) {
	categoryName = nCName; }

double SpendingCategory::GetAllocatedAmount() {
	return allocatedAmount; }

void SpendingCategory::SetAllocatedAmount(double nAAmt) {
	allocatedAmount = nAAmt; }

double SpendingCategory::GetAmountSpent() {
	return amountSpent; }

void SpendingCategory::UpdateAmountSpent() {
	/*ADD UP PURCHASES and ASSIGN TO AMOUNT-SPENT*/ }

void SpendingCategory::AddPurchase(Transaction nTrans) {
	transactions.push_back(nTrans); }