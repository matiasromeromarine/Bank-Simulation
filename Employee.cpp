// Employee.cpp

#include "Employee.h"
#include <string>

Employee::Employee(const std::string& name, int adminID) : User(name), adminID(adminID) {}
Employee::~Employee() {}

bool Employee::accessAccount(int accountID) const {
    return accountID > 0; 
}