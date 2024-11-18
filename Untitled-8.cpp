// BankAccount.cpp

#include "BankAccount.h"
#include <string>

BankAccount::BankAccount(int accountNumber, int pin, const std::string& accountOwner, float balance)
    : accountNumber(accountNumber), pin(pin), accountOwner(accountOwner), balance(balance) {}

BankAccount::~BankAccount() {}

bool BankAccount::setWithdraw(float amount) {
    if (amount > balance) return false; 
    balance -= amount;
    return true;
}

bool BankAccount::setDeposit(float amount) {
    if (amount <= 0) return false; 
    balance += amount;
    return true;
}

bool BankAccount::cancelAccount() {
    if (balance != 0) return false; 
    return true;
}