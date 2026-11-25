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

void SpendingCategory::AddPurchase(Transaction nTrans) {
	transactions.push_back(nTrans);
	amountSpent += nTrans.GetAmount(); }

void SpendingCategory::RemovePurchase(int index) {
	amountSpent -= transactions[index].GetAmount();
	transactions.erase(transactions.begin() + index); }

Transaction SpendingCategory::GetPurchase(int index) {
	return transactions.at(index); }