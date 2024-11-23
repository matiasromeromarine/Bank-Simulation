//BankAccount.cpp

#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(double balance) : balance(balance) {}

BankAccount::~BankAccount() {}

double BankAccount::getBalance() const {
    return balance;
}