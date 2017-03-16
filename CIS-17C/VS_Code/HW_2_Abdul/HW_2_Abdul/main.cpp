#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <vector>
#include <stdio.h> 
#include <cstring>
#include <conio.h>
#include <stdio.h> 
#include <dos.h>
#include <string>
#include <map>


using namespace std;

class account
{
	char cust_name[20];
	int  acc_no;
	char acc_type[20];
public:
	void get_accinfo()
	{
		cout << "\n\nEnter Customer Name :- ";
		cin >> cust_name;
		cout << "Enter Account Number :- ";
		cin >> acc_no;
		cout << "Enter Account Type :- ";
		cin >> acc_type;
	}
	void display_accinfo()
	{
		cout << "\n\nCustomer Name :- " << cust_name;
		cout << "\nAccount Number :- " << acc_no;
		cout << "\nAccount Type :- " << acc_type;
	}
};

class cur_acct : public account
{
	static float balance;
public:
	void disp_currbal()
	{
		cout << "\nBalance :- " << balance;
	}
	void deposit_currbal()
	{
		float deposit;
		cout << "\nEnter amount to Deposit :- ";
		cin >> deposit;
		balance = balance + deposit;
	}
	void withdraw_currbal()
	{
		float penalty, withdraw;
		cout << "\n\nBalance :- " << balance;
		cout << "\nEnter amount to be withdraw :-";
		cin >> withdraw;
		balance = balance - withdraw;
		if (balance < 500)
		{
			penalty = (500 - balance) / 10;
			balance = balance - penalty;
			cout << "\nBalance after deducting penalty : " << balance;
		}
		else if(withdraw > balance)
		{
			cout << "\n\nYou have to take permission for Bank Overdraft Facility\n";
			balance = balance + withdraw;
		}
		else
			cout << "\nAfter Withdrawl your Balance revels : " << balance;
	}
};

class sav_acct : public account
{
	static float savbal;
public:
	void disp_savbal()
	{
		cout << "\nBalance :- " << savbal;
	}
	void deposit_savbal()
	{
		float deposit, interest;
		cout << "\nEnter amount to Deposit :- ";
		cin >> deposit;
		savbal = savbal + deposit;
		interest = (savbal * 2) / 100;
		savbal = savbal + interest;
	}
	void withdraw_savbal()
	{
		float withdraw;
		cout << "\nBalance :- " << savbal;
		cout << "\nEnter amount to be withdraw :-";
		cin >> withdraw;
		savbal = savbal - withdraw;
		if (withdraw > savbal)
		{
			cout << "\n\nYou have to take permission for Bank Overdraft Facility\n";
			savbal = savbal + withdraw;
		}
		else
			cout << "\nAfter Withdrawl your Balance revels : " << savbal;
	}
};


float cur_acct::balance;
float sav_acct::savbal;


void main()
{
	clrscr();
	cur_acct c1;
	sav_acct s1;

	cout << "\nEnter S for saving customer and C for current a/c customer\n\n";
	char type;
	cin >> type;

	int choice;

	if (type == 's' || type == 'S')
	{
		s1.get_accinfo();
		while (1)
		{
			clrscr();
			cout << "\nChoose Your Choice\n";
			cout << "1)   Deposit\n";
			cout << "2)   Withdraw\n";
			cout << "3)   Display Balance\n";
			cout << "4)   Display with full Details\n";
			cout << "5)   Exit\n";
			cout << "6)   Choose Your choice:-";
			cin >> choice;
			switch (choice)
			{
			case 1: s1.deposit_savbal();
				getch();
				break;
			case 2: s1.withdraw_savbal();
				getch();
				break;
			case 3: s1.disp_savbal();
				getch();
				break;
			case 4: s1.display_accinfo();
				s1.disp_savbal();
				getch();
				break;
			case 5: goto end;
			default: cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
			}
		}
	}
	else
	{
		{
			c1.get_accinfo();
			while (1)
			{
				cout << "\nChoose Your Choice\n";
				cout << "1)   Deposit\n";
				cout << "2)   Withdraw\n";
				cout << "3)   Display Balance\n";
				cout << "4)   Display with full Details\n";
				cout << "5)   Exit\n";
				cout << "6)   Choose Your choice:-";
				cin >> choice;
				switch (choice)
				{
				case 1: c1.deposit_currbal();
					getch();
					break;
				case 2: c1.withdraw_currbal();
					getch();
					break;
				case 3: c1.disp_currbal();
					getch();
					break;
				case 4: c1.display_accinfo();
					c1.disp_currbal();
					getch();
					break;
				case 5: goto end;
				default: cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
				}
			}
		}
	end:
	}
}