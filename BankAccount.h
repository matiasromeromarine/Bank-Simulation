//BankAccount.h

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double balance);
    virtual ~BankAccount();
    double getBalance() const;
    virtual void displayInfo() const = 0; 
};

#endif