#include "Savings_Account.h" 

//This overloaded constructor calls upon the Account constructor because Savings_Account inherits from this class
//It delegates the account balance and name to the already defined constructor in Account and only adds interest rate in
//the constructor below
Savings_Account::Savings_Account(std::string acc_name, double acc_balance, double interest_rate) 
    : Account{acc_name, acc_balance}, interest_rate{interest_rate} {

}

bool Savings_Account::deposit(double amount) {
    //Creates a percentage rate and then multiplies that to amount and adds it to current amount
    //getting interest rate money added to acc_bal
    amount += amount *(interest_rate/100); 
    //Calls Accounts version of the deposit function which stores new acc_balance and then returns whether the 
    //function succeded or not letting this function know, which is why this function is a bool as well 
    return Account::deposit(amount); 
}

//Virtual function that uses accounts withdraw function as no additional changes needed to this function
bool Savings_Account::withdraw(double amount) {
    return Account::withdraw(amount); 
}

//Same idea as Account overriden print function but formated for Savings_Account
void Savings_Account::print(std::ostream &os) const {
    os.precision(2);
    os << std::fixed; 
    os << "[Savings_Account: " << acc_name << ": " << acc_balance << ": " << interest_rate
    << "%]"; 
}
