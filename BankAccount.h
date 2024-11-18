// BankAccount.h

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount {
protected:
    int accountNumber;
    int pin;
std::string accountOwner;
    float balance;

public:
    BankAccount(int accountNumber, int pin, const std::string& accountOwner, float balance = 0.0f);
    virtual ~BankAccount();

    virtual bool setWithdraw(float amount);
    virtual bool setDeposit(float amount);
    virtual bool cancelAccount();
};

#endif 