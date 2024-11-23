# Bank Account modeling

Context:

This program works around the problem of monetary transactions and a bank balance. The purpose of the program is to model a bank account database, this means including an account holder, ID, balance, etc. This project includes objects and attributes so it is great for the purpose of the class. I think it is very interesting and I want to work with a subject like this because I think that it is a possibility that in the future I work in finance or banking. For example the class will include the different types of  bank accounts and the respective owner. Each bank account will be another class and will include objects like: balance. The purpose of this program will be to make a clear balance sheet for easy access as if it were an actual database from a bank and an actual employee was creating a bank account for a client and later modifying it.

Diagram:
![image](https://github.com/user-attachments/assets/3b0c18be-5b03-408a-acd3-ab76d9ce4312)

Classes:
1. User: User is a super-class that works so every single person accesing the data base is recorded. It has 2 sub-classes: Employee and Client.
2. Employee: This is a class that derives from User and can access any account. It is important to differenciate this class from Client because it has more methods.
3. Client: This class stores a lot of information from the User. It is very important as every Bank Account must have a Client.
4. BankAccount: This super-class containts information about the Client's accounts. It has 3 sub-classes: InvestmentAccount, DebitAccount and CreditAccount.
5. CreditAccount: This subclass is dedicated to the possibility of a client opening a credit account.
6. DebitAccount: This subclass is dedicated to the possibility of a client opening a debit account.
7. InvestmentAccount: This subclass is dedicated to the possibility of a client opening an investment account.
