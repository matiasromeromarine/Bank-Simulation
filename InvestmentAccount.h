// InvestmentAccount.h

#ifndef INVESTMENTACCOUNT_H
#define INVESTMENTACCOUNT_H
#include <string>

#include "BankAccount.h"

class InvestmentAccount : public BankAccount {
private:
    int investmentLength; 
public:
    InvestmentAccount(int accountNumber, int pin, const std::string& accountOwner, float balance, int investmentLength);
    ~InvestmentAccount();

    void setInvestmentLength(int months);
    void setInvestmentRate(float rate);
};

#endif 