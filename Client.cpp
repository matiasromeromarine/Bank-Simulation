//Client.cpp

#include "Client.h"
#include <iostream>

Client::Client(const std::string& name, int id, BankAccount* account)
    : User(name, id), account(account) {}

void Client::displayInfo() const {
    std::cout << "Client: " << name << ", ID: " << id << "\n";
    account->displayInfo();
}