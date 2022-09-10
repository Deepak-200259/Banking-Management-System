#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;
int main()
{
	float draw=0,dep,transfer;
	char name[24];
	float balance=5000;
	int account,account1,account2;
	int type;
	int transaction=1;
	cout<<"\n\t\t\t\tBANKING SYSTEM\n\n";
	cout<<"\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n";
	cout<<"\t\t\4\t\t\t\t\t\t\4\n";
	cout<<"\t\t\4\t\t\t\t\t\t\4\n";
	cout<<"\t\t\4\tWELCOME TO OUR YAQ BANKING SYSTEM\t\4\n";
	cout<<"\t\t\4\t\t\t\t\t\t\4\n";
	cout<<"\t\t\4\t\t\t\t\t\t\4\n";
	cout<<"\t\t\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n";
	cout<<"Enter you name: ";
	cin>>name;
	cout<<"\nplease enter your account no.: ";
	cin>>type;
	while(transaction == 1)
	{
		int option;
		cout<<"\nchoose what you want to do\n";
		cout<<"1 - Balance Enquiry\n";
		cout<<"2 - Deposit\n";
		cout<<"3 - Withdraw\n";
		cout<<"4 - transfer\n";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"\t\t\t*BALANCE ENQUIRY*\n\n";
				cout<<"your current balance is: "<<balance<<" Rs \n";
				break;
			case 2:
				cout<<"\n\t\t\t*DEPOSIT AMMOUNT*\n\n";
				cout<<"how much money do you want to deposit:";
				cin>>dep;
				if(dep > 0 && dep<=20000)
				{
					cout<<"\nYour "<<dep<<" Rs deposited in your account.\n\n";
					balance+=dep;
				}
				else if(dep>20000)
				{
					cout<<"\nYou can't deposit that much ammount in one time.\n\n";
				}
				else
				{
					cout<<"\ninvalid deposit amount\n";
				}
				break;
			case 3:
				cout<<"\n\t\t*WITHDRAW AMMOUNT*\n\n";
				cout<<"How much money do you want to withdraw:";
				cin>>draw;
				if(draw<=balance && draw<=20000)
				{
					cout<<"\nYou just withdraw "<<draw<<" Rs\n\n";
					balance-=draw;
				}
				else if(draw>20000)
				{
					cout<<"\nYou can't withdraw that much amount in one time.\n\n";
				}
				else
				{
					cout<<"\nYou dont have enough money\n\n";
				}
				break;
			case 4:
				cout<<"\t\t\tTRANSFER AMMOUNT \n\n";
				cout<<"\n\t\tAccount You Want To Transfer: ";
				cin>>account2;
				cout<<"\nhow much ammount?: ";
				cin>>transfer;
				if(balance>=transfer)
				{
					cout<<"\nYour "<<transfer<<" Rs successfully transfered\n\n";
					balance-=transfer;
				}
				else
				{
					cout<<"\nYou do not have sufficient balance\n\n";
				}
				break;
			default:
				cout<<"invalid transaction\n";
		}
		transaction=0;
		while(transaction!=1 && transaction!=2)
		{
			cout<<"Do you want to do another transaction?\n";
			cout<<"1. yes 2. no\n";
			cin>>transaction;
			if(transaction!=1 && transaction!=2)
			{
				cout<<"invalid no.\nchoose between 1 and 2 only\n";
			}
		}
	}
	cout<<"\n\t\t\t    -----------------------";
	cout<<"\n\t\t\t\tYAQ BANK LIMITED\n";
	cout<<"\t\t\t    -----------------------\n\n";
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"\t\t\tDate and Time : "<<dt<<"\n";
	cout<<"\n\t\t\t\4 Your name: \n\n",name;
	cout<<"\t\t\t\4 Your account no: \n\n",type;
	if(dep >= 0 && dep < 20000)
	{
		cout<<"\t\t\t\4 You've deposited "<<dep<<"Rs\n";
	}
	else
	{
		cout<<"\t\t\t\4 You've deposited 0Rs\n";
	}
	if(draw>0 && draw<=20000 && draw<=balance)
	{
		cout<<"\t\t\t\4 You've withdraw "<<draw<<" Rs\n";
	}
	else
	{
		cout<<"\t\t\t\4 You've withdraw 0Rs\n";
	}
	if(transfer>0 && transfer<=20000 && transfer<=balance)
	{
		cout<<"\t\t\t\4 You've Transfered "<<transfer<<" Rs\n";
	}
	else
	{
		cout<<"\t\t\t\4 You've Transfered 0Rs\n ";
	}
	cout<<"\n\t\t\t____________________________________";
	cout<<"\n\t\t\t\t    Thank you! \n";
	cout<<"\t\t\t   Welcome to YAQ Banking System\n";
	cout<<"\t\t\t     www.YAQBANKINGSYSTEM.com\n";
	getch();
	return(0);
}
