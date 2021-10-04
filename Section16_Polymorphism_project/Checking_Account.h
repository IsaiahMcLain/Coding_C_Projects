#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h" 

//Checking Account is child class from Account, difference is that Checking Accounts will have a withdrawal
//fee
class Checking_Account: public Account{
private:
    //Static variables for the Class 
    static constexpr const char *set_cacc_name = "Unnamed Checking Account"; 
    static constexpr const double set_cacc_bal = 0.0; 
    static constexpr const double withdraw_trans = 1.5; 
    
protected:
    //attribute
    double withdrawal_trans; 

public: 
    //Overloaded Constructor (no default needed due to default values.) 
    Checking_Account(std::string cacc_name = set_cacc_name, double cacc_balance = set_cacc_bal,
    double withdrawl_trans = withdraw_trans); 
    
    //Will be changed to add the 1.50$ withdrawal fee on top of withdrawal amount
    virtual bool withdraw(double amount) override; 
    virtual bool deposit(double amount) override; 
    virtual void print(std::ostream &os) const override;  
    
    //Virtual destructor 
     virtual ~Checking_Account() = default; 

};

#endif //_CHECKING_ACCOUNT_H_