//#include "Account.h" not needed here as Savings_Account is child class of Account.h and has access to it
//Same applies for #include "Savings_Account.h" 
#include "Trust_Account.h"
#include "Account_Utility.h"
#include "Checking_Account.h" 

using std::cout; 

//Program meant to practice working with inheritance including heriarchies as well as diffrent branches
//of inheritace, this is done with a simple banking program consisting of several diffrent types of accounts
//If I were to redo this project I would make accounts an abstract class
int main()
{
    cout.precision(2); 
    cout << std::fixed; 
    
    //Accounts 
    std::vector<Account> accounts; 
    accounts.push_back(Account {}); 
    accounts.push_back(Account {"Luke"}); 
    accounts.push_back(Account {"Han", 2000}); 
    accounts.push_back(Account {"Anakin", 10000});

    print(accounts);
    deposit(accounts, 1000); 
    withdraw(accounts, 4000); 
    
    //Savings_Accounts
    std::vector<Savings_Account> saving_accounts; 
    saving_accounts.push_back(Savings_Account {}); 
    saving_accounts.push_back(Savings_Account {"Obi-Wan"}); 
    saving_accounts.push_back(Savings_Account {"Chewy", 3000});
    saving_accounts.push_back(Savings_Account {"Yoda", 11000, 3.0}); 
    
    print(saving_accounts);
    deposit(saving_accounts, 1000); 
    withdraw(saving_accounts, 6000); 
    
    //Checkings accounts
    std::vector<Checking_Account> checking_accounts; 
    checking_accounts.push_back(Checking_Account {}); 
    checking_accounts.push_back(Checking_Account {"Vader"}); 
    checking_accounts.push_back(Checking_Account {"Windu", 500});
    checking_accounts.push_back(Checking_Account {"Palpatine", 12000}); 
    
    print(checking_accounts);
    deposit(checking_accounts, 1000); 
    withdraw(checking_accounts, 4000); 
    
    //Trust accounts
    std::vector<Trust_Account> trust_accounts; 
    trust_accounts.push_back(Trust_Account {}); 
    trust_accounts.push_back(Trust_Account {"Plo-Koon"}); 
    trust_accounts.push_back(Trust_Account {"Kit Fisto", 1500});
    trust_accounts.push_back(Trust_Account {"Jabba", 16000}); 
    
    print(trust_accounts);
    deposit(trust_accounts, 5050); 
    withdraw(trust_accounts, 4000); 
    withdraw(trust_accounts, 1); 
    withdraw(trust_accounts, 1); 
    withdraw(trust_accounts, 1); 
    return 0; 
}
