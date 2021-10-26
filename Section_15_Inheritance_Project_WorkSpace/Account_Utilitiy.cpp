#include "Account_Utility.h" 

//--------------------------------------------Helpers for Account Class -----------------------------------------
/*This new Account_Utility file uses dynamic polymorphism to eliminate over 50 lines of repeated code and 
 * 9 functions. By using vectors that point to account objects in combination with our overloaded << operator,
 * we can use just three functions to control the use of our vector of objects which can hold any type of
 * class due to all of them being derived from account class. 
 * */ 
 
 
//Uses range-based for loop, made const as we are just displaying, runs through accounts and outputs them
//Works due to overloaded insertion operator 
void print(const std::vector <Account*> &accounts) {
    std::cout << "\n----- Accounts --------------------------------------------------------------------" << std::endl;
    for(const auto acs : accounts) 
        std::cout << *acs << std::endl; 
}

//Deposits specified amount to every object in vector 
void deposit(std::vector <Account*> &accounts, double amount) {
    std::cout << "\n----- Depositing into Accounts --------------------------------------------------" << std::endl;
    for(auto acs : accounts) {
        if(acs->deposit(amount))
            std::cout << "Deposit Successful: Added " << amount << " to " << *acs << std::endl;
        else 
            std::cout << "Failed to Deposit to Account, Amount of: " << amount <<  " to " << *acs << std::endl;
    }
}

//Withdraws specified amount from every object in vector 
void withdraw(std::vector <Account*> &accounts, double amount) {
    std::cout << "\n----- Withdrawing from Accounts -----------------------------------------------" << std::endl;
    for(auto acs : accounts) {
        if(acs->withdraw(amount))
            std::cout << "Withdraw Successful: Removed " << amount << " from " << *acs << std::endl;
        else 
            std::cout << "Failed to Withdraw From Account, Amount of: " << amount <<  " from " << *acs << std::endl;
    }
}




