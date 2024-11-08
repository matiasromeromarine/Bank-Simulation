//debitAccount

#ifndef DEBITACCOUNT_H
#define DEBITACCOUNT_H

#include "bankAccount.h"

class debitAccount : public bankAccount {
public:
    bool blocked;

    debitAccount(int accNumber, int accountPin, const client& owner)
        : bankAccount(accNumber, accountPin, owner), blocked(false) {}

    // Method to transfer money ("transfer")

};

#endif