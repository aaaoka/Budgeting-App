#include "Transaction.h"
#include <string>
using namespace std;

Transaction::Transaction(string iDesc, double iAmt) {
	description = iDesc;
	amount = iAmt; }

string Transaction::GetDescription() {
	return description; }

double Transaction::GetAmount() {
	return amount; }