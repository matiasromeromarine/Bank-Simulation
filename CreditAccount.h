// CreditAccount.h

#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <string>
#include "BankAccount.h"

class CreditAccount : public BankAccount {
private:
    bool blocked; // Indica si la cuenta está bloqueada
    int creditLimit;

public:
    CreditAccount(int accountNumber, int pin, const std::string& accountOwner, float balance, int creditLimit);
    ~CreditAccount();

    void setHold(bool hold);
    void setChangeLimit(int limit);
    void setInterestRate(float rate);
};

#endif 