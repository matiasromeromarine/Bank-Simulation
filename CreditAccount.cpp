//CreditAccount.cpp

#include "CreditAccount.h"
#include <iostream>

CreditAccount::CreditAccount(double balance) : BankAccount(balance) {}

void CreditAccount::displayInfo() const {
    std::cout << "Credit Account Balance: $" << balance << "\n";
}
