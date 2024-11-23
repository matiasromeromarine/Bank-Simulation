//Employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "User.h"

class Employee : public User {
private:
    std::string position;

public:
    Employee(const std::string& name, int id, const std::string& position);
    std::string getPosition() const;
};

#endif