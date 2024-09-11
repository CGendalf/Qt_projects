#include <iostream>
#include <cmath>
#include "bank.h"

Bank::Bank(std::string UserName, int UserMonth, double UserBalance, double UserProcent)
    :Name(UserName), month(UserMonth), balance(UserBalance), procent(UserProcent)
{
    Print();
}

double Bank::FinalBalance()const
{
    return ((balance * (procent / 100) / 365 * 30)*month) + balance;
}

void Bank::Print()const
{
    std::cout << "Account Name: " << Name << "\n";
    std::cout << "Start Balance: " << balance << "\n";
    std::cout << "Procent: " << procent << "\n";
    std::cout << "Months: " << month << "\n";
    std::cout << "Final Balance: " << FinalBalance() << "\n";
}

Bank::~Bank()
{
    std::cout << "Deleted account of " << Name << ".\n";
}
