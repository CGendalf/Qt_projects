#ifndef BANK_H
#define BANK_H

#include <string>

class Bank
{
private:
    std::string Name;
    int month;
    double balance;
    double procent;
public:
    Bank(std::string UserName = "User", int UserMonth = 0, double UserBalance = 0.0, double UserProcent = 0);
    double FinalBalance()const;
    void Print()const;
    ~Bank();
};

#endif // BANK_H
