// CreditAccount.cpp

#include "CreditAccount.h"
#include <string>

CreditAccount::CreditAccount(int accountNumber, int pin, const std::string& accountOwner, float balance, int creditLimit)
    : BankAccount(accountNumber, pin, accountOwner, balance), blocked(false), creditLimit(creditLimit) {}

CreditAccount::~CreditAccount() {}

void CreditAccount::setHold(bool hold) {
    blocked = hold;
}

void CreditAccount::setChangeLimit(int limit) {
    creditLimit = limit;
}

void CreditAccount::setInterestRate(float rate) {
}