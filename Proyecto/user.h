//user

#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class user {
public:
    string name; // Attribute to store the user's name

    user(const string& userName) : name(userName) {} 

    // Method to log the user in ("login")
};

#endif

