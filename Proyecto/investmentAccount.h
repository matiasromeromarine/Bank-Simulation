//investmentAccount

#ifndef INVESTMENTACCOUNT_H
#define INVESTMENTACCOUNT_H

#include "bankAccount.h"

class investmentAccount : public bankAccount {
public:
    int investmentLength; 

    investmentAccount(int accNumber, int accountPin, const client& owner, int length)
        : bankAccount(accNumber, accountPin, owner), investmentLength(length) {}

    // Method to apply an interest rate to the investment account ("interestRate")

};

#endif