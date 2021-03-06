#include "pch.h"
#include "string.h"
#include "stdlib.h"
#include <iostream>
#include <math.h>
#include <time.h>


struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers);

int main()
{
	srand(time_t(NULL));
	int i = 0;

	struct customer customers[10];

	populateCustomers(customers, 10);

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	if (!(transaction(customers, 10001, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf("account number %d - transaction processed", 10001);
	}
	printf("\n\n");

	if (!(transaction(customers, 33, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf("account number %d  - transaction processed", 33);
	}
	printf("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	return 0;
}

int getDay(int month)
{
	int day, max = 31;

	if (month = 2)
	{
		day = (rand() % 28) + 1;
	}

	if (month = 4 || 6 || 9 || 11)
	{
		day = (rand() % 30) + 1;
	}

	if (month = 1 || 3 || 5 || 7 || 8 || 10 || 12)
	{
		day = (rand() % 31) + 1;
	}

	return day;
}

int getMonth()
{
	int Month;

	Month = (rand() % 12) + 1;

	return Month;
}

int getYear()
{
	int year, AddValue;

	AddValue = ((rand() % 4 + 1) % 4);
	year = 2013 + AddValue;

	return year;
}

double getBalance()
{
	double Balance;
	Balance = (rand() % 10000) + (-5000);
	return Balance;
}

void printCustomers(struct customer customers[], int nCustomers)
{
	int i;
	for (i = 0; i < nCustomers; i++)
	{
		printf("%25s\t%13d\t%12.2lf\t%d/%d/%d\n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans.day, customers[i].lastTrans.month, customers[i].lastTrans.year);
	}


	return;
}

void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = { "Haiden Soto","Oscar Hernandez","Heath Hickman","Reagan Mcknight","Noah Bartlett","Ross Day","Maribel Livingston","Jewel Phillips","Blake Gardner","Fernanda Ponce" };

	for (i = 0; i < nCustomers; i++)
	{
		strcpy_s(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;
		customers[i].balance = getBalance();
		customers[i].lastTrans.day = getDay(getMonth());
		customers[i].lastTrans.month = getMonth();
		customers[i].lastTrans.year = getYear();
	}

	return;

}

int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers)
{
	int i = 0;
	for (i + 0; i < nCustomers; i++)
	{
		if (customers[i].accountNumber == accountNumber)
		{
			customers[i].balance = customers[i].balance + amount;
			return 1;
		}
		else
		{

		}
	}


	return 0;
}