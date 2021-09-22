#include "Trust_Account.h" 

//Overloaded constructor, calls upon Savings Account constructor which in turn calls Account constructor 
Trust_Account::Trust_Account(std::string acc_name, double acc_balance, double interest_rate, int withdraw_lim,
double account_dep_bonus)
    :Savings_Account{acc_name, acc_balance, interest_rate}, withdraw_lim{withdraw_lim}, 
    account_dep_bonus{account_dep_bonus} {
        
}

//Works by determining if amount deposited is greater than 5000, if so add the bonus. Could get rid of hard code by making
//a static constexpr which stores value of 5000
bool Trust_Account::deposit(double amount) {
    if(amount >= 5000) 
        amount  += account_dep_bonus; 
    return Savings_Account::deposit(amount); 
}

//Works by using else if logic to determine how many withdrawls have occured, if withdrawl limit = 0 then the program 
//returns false not letting user withdraw any more money
bool Trust_Account::withdraw(double amount) {
    if(acc_balance - amount < 0) 
        return false; 
    else if(withdraw_lim == 0)
              return false; 
    else{
        --withdraw_lim;
        acc_balance -= amount; 
        return true; 
    }
}

//Works like other overloaded stream operators in previous classes
std::ostream &operator<<(std::ostream &os, const Trust_Account &tacc) {
    os << "[Trust_Account: " << tacc.acc_name << ": " << tacc.acc_balance << 
    ": " << "Withdrawls left: " << tacc.withdraw_lim << ": " << "Bonus if deposit is over 5000$ is: " 
    << tacc.account_dep_bonus << "$]"; 
    return os; 
}