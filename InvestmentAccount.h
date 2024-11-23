//InvestmentAccount.h

#ifndef INVESTMENTACCOUNT_H
#define INVESTMENTACCOUNT_H

#include "BankAccount.h"

class InvestmentAccount : public BankAccount {
public:
    InvestmentAccount(double balance);
    void displayInfo() const override;
};

#endif