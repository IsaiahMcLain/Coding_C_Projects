#include "Checking_Account.h" 

//Overloaded constructor 
Checking_Account::Checking_Account(std::string acc_name, double acc_balance, double withdrawl_trans)
    : Account{acc_name, acc_balance}, withdrawal_trans{withdrawl_trans} {

}

//Works like normal withdrawal but adds withdrawal transaction fee to overall withdrawal amount 
bool Checking_Account::withdraw(double amount) {
    if(acc_balance - (amount + withdraw_trans) < 0) 
        return false; 
    else {
        acc_balance -= amount + withdraw_trans; 
        return true; 
    }
}

//Works like previous overloaded operators but is formated to Checking_Account 
std::ostream &operator<<(std::ostream &os, const Checking_Account &cacc) {
    os << "[Checking_Account: " << cacc.acc_name << ": " << cacc.acc_balance << 
    ": " << "Withdrawl fee: " << cacc.withdraw_trans <<"$]"; 
    return os; 
}