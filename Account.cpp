#include "Account.h" 

//Overloaded constructor 
Account::Account(std::string name, double balance) 
    : acc_name{name}, acc_balance{balance} {
        
}

//Uses if/else logic to determine if user can deposit money to account or not
bool Account::deposit(double amount){
    if(amount < 0){
        return false; 
    }
    else{
        acc_balance += amount; 
        return true; 
    }
}

//Lets user withdraw money from account only if they do not go under 0 
bool Account::withdraw(double amount){
    if(acc_balance - amount < 0){
        return false; 
    }
    else{
        acc_balance -= amount; 
        return true; 
    }
}

//New version of print function which uses an abstract class interface called I_Printable to output 
//information to the user about the account type using dynamic polymorphism which saves the use
//of repeated code. 
void Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed; 
    os << "[Account: " << acc_name << ": " << acc_balance << "]"; 
}
