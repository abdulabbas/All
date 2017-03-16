#include "Account.h"

//  Penalty Fee Constant
const double PENALTY_FEE = 5.00;

Account::Account()
{
	balance = 0.00;
}

Account::Account(double money)
{
	balance = money;
}

void Account::Add(double money)
{
	balance += money;
}

void Account::Withdraw(double money)
{
	if (money > balance)
		balance += PENALTY_FEE;
	else
		balance -= money;
}

double Account::GetBalance()
{
	return balance;
}