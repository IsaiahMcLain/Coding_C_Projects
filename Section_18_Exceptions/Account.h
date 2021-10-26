#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include "i_printable.h"
#include <iostream> 
#include <string> 

//Highest class in the inheritance hierarchy, is an abstract base class for other accounts
class Account: public I_Printable {
private:
    //Static variables for the Class 
    static constexpr const char *set_acc_name = "Unnamed Account"; 
    static constexpr const double set_acc_bal = 0.0; 

protected: 
    //Attributes
    std::string acc_name; 
    double acc_balance; 
    
public: 
    //Overloaded Constructor w/ default values that way a default constructor isn't needed
    Account(std::string acc_name = set_acc_name, double acc_balance = set_acc_bal);
    
    //Methods
    virtual bool deposit(double amount) = 0;
    virtual  bool withdraw(double amount) = 0; 
    //New abstract interface implementaion of print function
    virtual void print(std::ostream &os) const override;  
    
    //Virtual Destructor 
    virtual ~Account() = default; 
    
};

#endif //_ACCOUNT_H_ 