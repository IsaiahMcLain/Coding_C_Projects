#ifndef _ACCOUNT_UTILITY_H_
#define _ACCOUNT_UTILITY_H_
#include <vector>
#include "Account.h"

//Helper functions for this project that make it easier to create multiple objects and manipulate them

//Vector functions for Account class, no longer need the other functions as we are using dynamic polymorphism
void print(const std::vector <Account*> &accounts); 
void deposit(std::vector <Account*> &accounts, double amount); 
void withdraw(std::vector <Account*> &accounts, double amount); 

#endif //_ACCOUNT_UTILITY_H_