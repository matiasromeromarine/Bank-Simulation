//DebitAccount.cpp

#include "DebitAccount.h"
#include <iostream>

DebitAccount::DebitAccount(double balance) : BankAccount(balance) {}

void DebitAccount::displayInfo() const {
    std::cout << "Debit Account Balance: $" << balance << "\n";
}
