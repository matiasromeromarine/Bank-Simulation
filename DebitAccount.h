//DebitAccount.h

#ifndef DEBITACCOUNT_H
#define DEBITACCOUNT_H

#include "BankAccount.h"

class DebitAccount : public BankAccount {
public:
    DebitAccount(double balance);
    void displayInfo() const override;
};

#endif