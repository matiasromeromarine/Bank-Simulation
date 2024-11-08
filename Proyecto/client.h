//client

#ifndef CLIENT_H
#define CLIENT_H

#include "user.h" 

class Client : public user {
public:
    int clientID;
    string phoneNumber;
    string address;
    string dateOfBirth;
    double creditScore;

    client(const string& userName, int id, cont string& phone, const string& addr, const string& dob, double score)
        : user(userName), clientID(id), phoneNumber(phone), address(addr), dateOfBirth(dob), creditScore(score) {}

    // Method to update client data ("upadateData")

};

#endif