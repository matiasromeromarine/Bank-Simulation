//InvestmentAccount.cpp

#include "InvestmentAccount.h"
#include <iostream>

InvestmentAccount::InvestmentAccount(double balance) : BankAccount(balance) {}

void InvestmentAccount::displayInfo() const {
    std::cout << "Investment Account Balance: $" << balance << "\n";
}