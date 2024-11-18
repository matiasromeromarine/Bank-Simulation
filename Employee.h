// Employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "User.h"

class Employee : public User {
private:
    int adminID;

public:
    Employee(const std::string& name, int adminID);
    ~Employee();

    bool accessAccount  (int accountID) const;
};

#endif 