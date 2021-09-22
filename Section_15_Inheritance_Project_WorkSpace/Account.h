#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream> 
#include <string> 

//Highest class in the inheritance hierarchy, while out of scope of this project I would make this class 
//an abstract class which all the other classes are based off of. 
class Account {
    friend std::ostream &operator<<(std::ostream &os, const Account &account); 
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
    bool deposit(double amount);
    bool withdraw(double amount); 
    double get_balance() const; 
    
};

#endif //_ACCOUNT_H_ 