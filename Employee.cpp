//Employee.cpp

#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& position)
    : User(name, id), position(position) {}

std::string Employee::getPosition() const {
    return position;
}