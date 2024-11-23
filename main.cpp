//main.cpp

#include <iostream>
#include <string>
#include "Employee.h"
#include "Client.h"
#include "DebitAccount.h"
#include "CreditAccount.h"
#include "InvestmentAccount.h"

int main() {

    std::string empName, empPosition;
    int empId;

    std::cout << "Employee in charge\n";
    std::cout << "Enter Employee Name: ";
    std::getline(std::cin, empName); 
    std::cout << "Enter Employee ID: ";
    std::cin >> empId;
    std::cin.ignore(); 
    std::cout << "Enter Employee Position: ";
    std::getline(std::cin, empPosition); 
    Employee emp(empName, empId, empPosition);

    std::cout << "Authorization: " << emp.getName()
              << ", ID: " << emp.getId()
              << ", Position: " << emp.getPosition() << "\n";

  
    int numClients;
    std::cout << "\nHow many clients do you want to register? ";
    std::cin >> numClients;
    std::cin.ignore(); 

    for (int i = 0; i < numClients; ++i) {
        std::cout << "\nRegistering Client " << (i + 1) << "...\n";

        std::string name;
        int id;
        double initialBalance;

        std::cout << "Enter Client Name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Client ID: ";
        std::cin >> id;
        std::cin.ignore();
        std::cout << "Enter Initial Debit Account Balance: ";
        std::cin >> initialBalance;
        std::cin.ignore();
        DebitAccount debitAccount(initialBalance);
        Client debitClient(name, id, &debitAccount);
        debitClient.displayInfo();

        std::cout << "\nEnter Initial Credit Account Balance: ";
        std::cin >> initialBalance;
        std::cin.ignore();
        CreditAccount creditAccount(initialBalance);
        Client creditClient(name, id, &creditAccount);
        creditClient.displayInfo();

        std::cout << "\nEnter Initial Investment Account Balance: ";
        std::cin >> initialBalance;
        std::cin.ignore();
        InvestmentAccount investmentAccount(initialBalance);
        Client investmentClient(name, id, &investmentAccount);
        investmentClient.displayInfo();
    }

    return 0;
}
