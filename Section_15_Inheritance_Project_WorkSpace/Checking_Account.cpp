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

//Uses Accounts withdrawal method and therefore the function is declared virtual here as well as no changes 
//are made to this function
bool Checking_Account::deposit(double amount) { //Virtual function 
    return Account::deposit(amount); //Calls upon deposit method in Account 
}

//Same idea as Account overriden print function but formated for Checking_Account
void Checking_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed; 
    os << "[Checking_Account: " << acc_name << ": " << acc_balance << 
    ": " << "Withdrawl fee: " << withdraw_trans <<"$]"; 
}