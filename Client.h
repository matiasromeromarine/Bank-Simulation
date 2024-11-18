// Client.h

#ifndef CLIENT_H
#define CLIENT_H
#include "User.h"

class Client : public User {
private:
    int clientID;
    int phone;
    std::string address;
    std::string dateOfBirth;
    int creditScore;

public:
    Client(const std::string& name, int clientID, int phone, const std::string& address, const std::string& dateOfBirth, int creditScore);
    ~Client();

    int getClientID() const;
    int getPhone() const;
    std::string getAddress() const;
    std::string getDateOfBirth() const;
    int getCreditScore() const;
};

#endif 