//bankAccount

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include "client.h"

class bankAccount {
public:
    int accountNumber;
    int pin;
    string accountOwner;
    float balance;

    bankAccount(int accNumber, int accountPin, const Client& owner)
        : accountNumber(accNumber), pin(accountPin), accountOwner(owner.name), balance(0.0) {}

    // Method to withdraw money ("withdraw")

    // Method to deposit money ("deposit")

    // Method to cancel the account ("cancel")

};

#endif