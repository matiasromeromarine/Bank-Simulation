// DebitAccount.cpp

#include "DebitAccount.h"
#include <string>

DebitAccount::DebitAccount(int accountNumber, int pin, const std::string& accountOwner, float balance)
    : BankAccount(accountNumber, pin, accountOwner, balance), blocked(false) {}

DebitAccount::~DebtAccount() {}

bool DebitAccount::setTransfer(float amount) {
    if (blocked || amount > balance) return false; 
    balance -= amount;
    return true;
}