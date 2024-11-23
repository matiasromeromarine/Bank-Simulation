//Client.h

#ifndef CLIENT_H
#define CLIENT_H

#include "User.h"
#include "BankAccount.h"

class Client : public User {
private:
    BankAccount* account;

public:
    Client(const std::string& name, int id, BankAccount* account);
    void displayInfo() const;
    void setAccount(BankAccount* acc){
        account = acc;
    }
};

#endif