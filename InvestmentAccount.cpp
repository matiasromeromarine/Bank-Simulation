// InvestmentAccout.cpp

#include "InvestmentAccount.h"
#include <string>

InvestmentAccount::InvestmentAccount(int accountNumber, int pin, const std::string& accountOwner, float balance, int investmentLength)
    : BankAccount(accountNumber, pin, accountOwner, balance), investmentLength(investmentLength) {}

InvestmentAccount::~InvestmentAccount() {}

void InvestmentAccount::setInvestmentLength(int months) {
    investmentLength = months;
}

void InvestmentAccount::setInvestmentRate(float rate) {
}