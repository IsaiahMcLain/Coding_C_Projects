#include "Account_Utility.h" 

//--------------------------------------------Helpers for Account Class -----------------------------------------
//Uses range-based for loop, made const as we are just displaying, runs through accounts and outputs them
//Works due to overloaded insertion operator 
void print(const std::vector <Account> &accounts) {
    std::cout << "\n----- Accounts --------------------------------------------------------------------" << std::endl;
    for(const auto &acs : accounts) 
        std::cout << acs << std::endl; 
}

//Deposits specified amount to every object in vector 
void deposit(std::vector <Account> &accounts, double amount) {
    std::cout << "\n----- Depositing into Accounts --------------------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.deposit(amount))
            std::cout << "Deposit Successful: Added " << amount << " to " << acs << std::endl;
        else 
            std::cout << "Failed to Deposit to Account, Amount of: " << amount <<  " to " << acs << std::endl;
    }
}

//Withdraws specified amount from every object in vector 
void withdraw(std::vector <Account> &accounts, double amount) {
    std::cout << "\n----- Withdrawing from Accounts -----------------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.withdraw(amount))
            std::cout << "Withdraw Successful: Removed " << amount << " from " << acs << std::endl;
        else 
            std::cout << "Failed to Withdraw From Account, Amount of: " << amount <<  " from " << acs << std::endl;
    }
}

//--------------------------------------------Helpers for Savings_Account Class --------------------------------------
//All functions work the same as previous ones 
void print(const std::vector <Savings_Account> &accounts) {
    std::cout << "\n----- Saving_Accounts -------------------------------------------------------------" << std::endl;
    for(const auto &acs : accounts) 
        std::cout << acs << std::endl; 
}

void deposit(std::vector <Savings_Account> &accounts, double amount) {
    std::cout << "\n----- Depositing into Saving_Accounts -------------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.deposit(amount))
            std::cout << "Deposit Successful: Added " << amount << " to " << acs << std::endl;
        else 
            std::cout << "Failed to Deposit to Account, Amount of: " << amount <<  " to " << acs << std::endl;
    }
}

void withdraw(std::vector <Savings_Account> &accounts, double amount) {
    std::cout << "\n----- Withdrawing from Saving_Accounts ----------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.withdraw(amount))
            std::cout << "Withdraw Successful: Removed " << amount << " from " << acs << std::endl;
        else 
            std::cout << "Failed to Withdraw From Saving_Account, Amount of: " << amount <<  " from " << acs << std::endl;
    }
}

//--------------------------------------------Helpers for Checking_Account Class --------------------------------------
//All functions work the same as previous ones 
void print(const std::vector <Checking_Account> &accounts) {
    std::cout << "\n----- Checking_Accounts -----------------------------------------------------------" << std::endl;
    for(const auto &acs : accounts) 
        std::cout << acs << std::endl; 
}

void deposit(std::vector <Checking_Account> &accounts, double amount) {
    std::cout << "\n----- Depositing into Checking_Accounts -----------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.deposit(amount))
            std::cout << "Deposit Successful: Added " << amount << " to " << acs << std::endl;
        else 
            std::cout << "Failed to Deposit to Account, Amount of: " << amount <<  " to " << acs << std::endl;
    }
}

void withdraw(std::vector <Checking_Account> &accounts, double amount) {
    std::cout << "\n----- Withdrawing from Checking_Accounts --------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.withdraw(amount))
            std::cout << "Withdraw Successful: Removed " << amount << " from " << acs << std::endl;
        else 
            std::cout << "Failed to Withdraw From Checking_Account, Amount of: " << amount <<  " from " << acs << std::endl;
    }
}

//--------------------------------------------Helpers for Trust_Account Class --------------------------------------
//All functions work the same as previous ones 
void print(const std::vector <Trust_Account> &accounts) {
    std::cout << "\n----- Trust_Accounts -----------------------------------------------------------------" << std::endl;
    for(const auto &acs : accounts) 
        std::cout << acs << std::endl; 
}

void deposit(std::vector <Trust_Account> &accounts, double amount) {
    std::cout << "\n----- Depositing into Trust_Accounts -----------------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.deposit(amount))
            std::cout << "Deposit Successful: Added " << amount << " to " << acs << std::endl;
        else 
            std::cout << "Failed to Deposit to Account, Amount of: " << amount <<  " to " << acs << std::endl;
    }
}

void withdraw(std::vector <Trust_Account> &accounts, double amount) {
    std::cout << "\n----- Withdrawing from Trust_Accounts --------------------------------------------" << std::endl;
    for(auto &acs : accounts) {
        if(acs.withdraw(amount))
            std::cout << "Withdraw Successful: Removed " << amount << " from " << acs << std::endl;
        else 
            std::cout << "Failed to Withdraw From Trust_Account, Amount of: " << amount <<  " from " << acs << std::endl;
    }
}