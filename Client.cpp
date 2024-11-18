// Client.cpp

#include "Client.h"
#include <string>

Client::Client(const std::string& name, int clientID, int phone, const std::string& address, const std::string& dateOfBirth, int creditScore)
    : User(name), clientID(clientID), phone(phone), address(address), dateOfBirth(dateOfBirth), creditScore(creditScore) {}

Client::~Client() {}

int Client::getClientID() const { return clientID; }
int Client::getPhone() const { return phone; }
std::string Client::getAddress() const { return address; }
std::string Client::getDateOfBirth() const { return dateOfBirth; }
int Client::getCreditScore() const { return creditScore; }