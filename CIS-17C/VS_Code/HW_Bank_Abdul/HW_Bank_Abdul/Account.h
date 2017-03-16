#pragma once

#include <iostream>
#include <string>
#include <iomanip>      

using namespace std;

class Account
{
public:
	Account();
	Account(double balance);
	void Add(double money);
	void Withdraw(double money);
	double GetBalance();

private:
	double balance;
};
