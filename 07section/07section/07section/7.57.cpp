#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Account
{
public:
	Account() = default;
	Account(const string &o, const string &p, double a) :owner(o), pwd(p), amount(a) {}
	void calculate() { amount += amount*interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);
private:
	string owner;
	string pwd;
	double amount;
	static double interestRate;
	static double initRet();
};

double Account::interestRate = initRet();

double Account::initRet()
{
	return 0.06;
}

void Account::rate(double newRate)
{
	interestRate = newRate;
}

int main(void)
{
	Account a1("hewei", "0820", 3000000);
	a1.calculate();


	system("pause");
	return 0;
}