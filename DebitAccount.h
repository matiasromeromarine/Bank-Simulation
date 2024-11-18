// DebitAccount.h

#ifndef DEBITACCOUNT_H
#define DEBITACCOUNT_H
#include <string>

#include "BankAccount.h"

class DebitAccount : public BankAccount {
private:
    bool blocked;

public:
    DebitAccount(int accountNumber, int pin, const std::string& accountOwner, float balance);
    ~DebitAccount();

    bool setTransfer(float amount);
};

#endif 