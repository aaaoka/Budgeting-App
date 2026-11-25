#include <iostream>
using namespace std;
#include "bonus.cpp"
#include "Budget.h"
#include "BudgetTemplate.h"
#include "Transaction.h"
#include "SpendingCategory.h"
#include "Utility.h"

int main() { tmh();

	//cout << "NOT BROKEN (YET)";

	Transaction myYar("F*rtnite card", 19.68);
	//cout << "$" << myYar.GetAmount() << " " << myYar.GetDescription() << "... who WANTS it..?";

	SpendingCategory myJoy("Intoxicants", 2000.00);

	{ for (int i = 0; i < 3000; ++i) {myJoy.AddPurchase(myYar);} }
	cout << myJoy.GetName() << ", " << dollars(myJoy.GetAllocatedAmount()) << endl << dollars(myJoy.GetAmountSpent()) << endl;

	tmf(); return 0; }