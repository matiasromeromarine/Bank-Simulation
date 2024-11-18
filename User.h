// User.h

#ifndef USER_H
#define USER_H
#include <string>

class User {
protected:
    std::string name;

public:
    User(const std::string& name);
    virtual ~User();

    virtual void registerUser(int id) = 0;
    bool isRegistered(int id) const;
};

#endif 