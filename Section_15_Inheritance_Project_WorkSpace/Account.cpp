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

//Getter
double Account::get_balance() const{
    return acc_balance; 
}

//Overloaded stream operator which lets us output objects to terminal 
std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "[Account: " << account.acc_name << ": " << account.acc_balance << "]"; 
    return os; 
}