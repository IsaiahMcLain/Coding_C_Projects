#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_ 
#include "Account.h" 

//Savings_Accounts are child class of Account, difference is that savings accounts have an interest rate which
//is added on to any deposit a user makes 
class Savings_Account: public Account{
private:
    //Static variables for the class 
    static constexpr const char *set_sacc_name = "Unnamed Savings Account"; 
    static constexpr double set_sacc_bal = 0.0; 
    static constexpr double set_sacc_int = 0.0; 
    
protected: 
    //Attribute
    double interest_rate; 

public: 
    //Overloaded Constructor 
    Savings_Account(std::string sacc_name = set_sacc_name, double acc_balance = set_sacc_bal, 
    double interest_rate = set_sacc_int); 
   
    //Method (while inherited we are changing it to have it add the interest rate to the deposit amount) 
    virtual bool deposit(double amount) override; 
    virtual bool withdraw(double amount) override; 
    
    virtual void print(std::ostream &os) const override;  
    
    //Virtual Destructor 
    virtual ~Savings_Account() = default; 
};

#endif //_SAVINGS_ACCOUNT_H_