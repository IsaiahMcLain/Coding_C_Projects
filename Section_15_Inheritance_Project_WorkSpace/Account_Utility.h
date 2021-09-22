#ifndef _ACCOUNT_UTILITY_H_
#define _ACCOUNT_UTILITY_H_
#include <vector>
#include "Trust_Account.h"
#include "Checking_Account.h"

//Helper functions for thi project that make it easier to create multiple objects and manipulate them

//Vector functions for Account class
void print(const std::vector <Account> &accounts); 
void deposit(std::vector <Account> &accounts, double amount); 
void withdraw(std::vector <Account> &accounts, double amount); 

//Vector functions for Savings_Account class
void print(const std::vector <Savings_Account> &accounts);
void deposit(std::vector <Savings_Account> &accounts, double amount);
void withdraw(std::vector <Savings_Account> &accounts, double amount); 

//Vector functions for Checking_Account class
void print(const std::vector <Checking_Account> &accounts);
void deposit(std::vector <Checking_Account> &accounts, double amount);
void withdraw(std::vector <Checking_Account> &accounts, double amount); 

//Vector functions for Trust_Account class
void print(const std::vector <Trust_Account> &accounts);
void deposit(std::vector <Trust_Account> &accounts, double amount);
void withdraw(std::vector <Trust_Account> &accounts, double amount); 

#endif //_ACCOUNT_UTILITY_H_