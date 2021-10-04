//#include "Account.h" not needed here as Savings_Account is child class of Account.h and has access to it
//Same applies for #include "Savings_Account.h" 
#include "Trust_Account.h"
#include "Account_Utility.h"
#include "Checking_Account.h" 

using std::cout; 

//Program meant to practice working with polymorhpism, uses previous inheritance program but expands on 
//it making all inherited classes polymorhpic and also redoes some of the output and helper functions
//to reduce lines of code through dynamic polymorphism 
int main()
{
    
    Account *ptr = new Checking_Account("Yoda", 7000);
    
    cout << *ptr << std::endl; 
    
    Account *ptr1 = new Savings_Account("Han", 6000, 1.3); 
    
    cout << *ptr1 << std::endl; 
    
    delete ptr1; 
    delete ptr;
    
    Account *p1 = new Checking_Account("Chewy", 2000); 
    Account *p2 = new Savings_Account("Vader", 1000, 8.6); 
    Account *p3 = new Trust_Account("Leia", 150, 3.9); 
    Account *p4 = new Trust_Account("Palpatine", 80000, 3.3); 
    Account *p5 = new Checking_Account("Windu", 4050); 
    
    std::vector<Account *> accounts {p1,p2,p3,p4,p5}; 
    
    print(accounts);  
    withdraw(accounts, 200); 
    deposit(accounts, 500); 
    withdraw(accounts, 100000); 
    print(accounts); 
    
    delete p1; 
    delete p2;
    delete p3; 
    delete p4; 
    delete p5; 
    
    
//    Savings_Account s {"han", 5000, 3.4}; 
//    Trust_Account c; 
//    cout << s << std::endl; 
//    cout << c << std::endl; 
//    
//    s.deposit(1000); 
//    cout << s << std::endl; 
    
    
    
//    //Savings_Accounts
//    Account *s1 = new Savings_Account(); 
//    Account *s2 = new Savings_Account(); 
//    Account *s3 = new Savings_Account(); 
//    Account *s4 = new Savings_Account(); 
//    
//    std::vector<Savings_Account *> saving_accounts {s1,s2,s3,s4}; 
//    saving_accounts.push_back(Savings_Account {}); 
//    saving_accounts.push_back(Savings_Account {"Obi-Wan"}); 
//    saving_accounts.push_back(Savings_Account {"Chewy", 3000});
//    saving_accounts.push_back(Savings_Account {"Yoda", 11000, 3.0}); 
//    
//    print(saving_accounts);
//    deposit(saving_accounts, 1000); 
//    withdraw(saving_accounts, 6000); 
//    
//    //Checkings accounts
//    std::vector<Checking_Account> checking_accounts; 
//    checking_accounts.push_back(Checking_Account {}); 
//    checking_accounts.push_back(Checking_Account {"Vader"}); 
//    checking_accounts.push_back(Checking_Account {"Windu", 500});
//    checking_accounts.push_back(Checking_Account {"Palpatine", 12000}); 
//    
//    print(checking_accounts);
//    deposit(checking_accounts, 1000); 
//    withdraw(checking_accounts, 4000); 
//    
//    //Trust accounts
//    std::vector<Trust_Account> trust_accounts; 
//    trust_accounts.push_back(Trust_Account {}); 
//    trust_accounts.push_back(Trust_Account {"Plo-Koon"}); 
//    trust_accounts.push_back(Trust_Account {"Kit Fisto", 1500});
//    trust_accounts.push_back(Trust_Account {"Jabba", 16000}); 
//    
//    print(trust_accounts);
//    deposit(trust_accounts, 5050); 
//    withdraw(trust_accounts, 4000); 
//    withdraw(trust_accounts, 1); 
//    withdraw(trust_accounts, 1); 
//    withdraw(trust_accounts, 1); 
    return 0; 
}
