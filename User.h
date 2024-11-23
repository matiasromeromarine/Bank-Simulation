//User.h

#ifndef USER_H
#define USER_H

#include <string>

class User {
protected:
    std::string name;
    int id;

public:
    User(const std::string& name, int id);
    virtual ~User();

    std::string getName() const;
    int getId() const;
};

#endif