//CreditAccount.h

#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H

#include "BankAccount.h"

class CreditAccount : public BankAccount {
public:
    CreditAccount(double balance);
    void displayInfo() const override;
};

#endif
