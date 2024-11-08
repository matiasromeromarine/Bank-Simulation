//employee

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "user.h" 

class employee : public User {
public:
    int adminID; // Attribute for admin ID

    employee(const string& userName, int id):
        user(userName), adminID(id) {} 
  
        // Method to access an account ("accesAccount")

};

#endif