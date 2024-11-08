//creditAccount

#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H

#include "bankAccount.h"

class creditAccount : public bankAccount {
public:
    bool blocked;
    int heldBalance;
    int creditLimit;

    creditAccount(int accNumber, int accountPin, const Client& owner, int limit)
        : bankAccount(accNumber, accountPin, owner), blocked(false), heldBalance(0), creditLimit(limit) {}

    // Method to hold a certain amount of the balance ("holdBalance")

    // Method to change the credit limit ("changeLimit")

    // Method to apply an interest rate to the balance ("interestRate")

};

#endif