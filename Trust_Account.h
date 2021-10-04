#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

//Trust accounts give bonus to user if they deposit over a certain amount and only allows 3 withdrawals. 
 
class Trust_Account : public Savings_Account {
private: 
    //Static variables for the class 
    static constexpr const char *set_tacc_name = "Unnamed Trust Account"; 
    static constexpr double set_tacc_bal = 0.0; 
    static constexpr double set_tacc_int = 0.0; 
    static constexpr double set_bonus = 50.0;
    static constexpr int set_withdraw_lim = 3; //Trust accounts can only be withdrawn from 3 times
    
protected: 
    //Attributes
    int withdraw_lim; 
    double account_dep_bonus; 

public: 
    //Overloaded constructor, eliminates need for default constructor due to default values
    Trust_Account(std::string acc_name = set_tacc_name, double acc_balance = set_tacc_bal, 
    double interest_rate = set_tacc_int, int withdraw_lim = set_withdraw_lim, 
    double account_dep_bonus = set_bonus); 
    
    //Deposit method is edited and therfore needs to be redeclared 
    virtual bool deposit(double amount) override;
    //Withdraw method is edited as well 
    virtual bool withdraw(double amount) override; 
    
    virtual void print(std::ostream &os) const override;  
    
    //Virtual Destructor 
    virtual ~Trust_Account() = default; 
}; 

#endif //_TRUST_ACCOUNT_H_