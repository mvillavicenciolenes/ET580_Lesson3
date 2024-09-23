#include <iostream>
#include <string>
using namespace std;

class CheckingAccount {
private:
    string fullName;
    string SSN;
    string routingNumber;
    string accountNumber;
    float balance;

public:
    CheckingAccount(string name, string ssn, string routing, string account, float initialBalance) {
        fullName = name;
        SSN = ssn;
        routingNumber = routing;
        accountNumber = account;
        balance = initialBalance;
    }

    void displayAccInfo() {
        cout << "Full Name: " << fullName << endl;
        cout << "SSN: " << SSN << endl;
        cout << "Routing Number: " << routingNumber << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    CheckingAccount account("Shrek", "943-78-7739", "987654321", "1122334455", 1000.46);

    account.displayAccInfo();

    return 0;
}