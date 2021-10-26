//#include "Account.h" not needed here as Savings_Account is child class of Account.h and has access to it
//Same applies for #include "Savings_Account.h" 
#include "Trust_Account.h"
#include "Account_Utility.h"
#include "Checking_Account.h" 
#include "illegalexception.h"
#include "IllegalWithdrawal.h"
#include <memory> //For smart pointers

using std::cout; 

//Program meant to practice working with exceptions, uses previous challenges and builds upon it by using
//Exceptions to prevent a negative balance from being deposited or an overwithdrawal from occuring. 
int main()
{
    try{
        std::unique_ptr<Account> vaders_account = 
        std::make_unique<Checking_Account>("Vader", 100.0); 
        
        std::cout << *vaders_account << std::endl; 
        
        std::unique_ptr<Account> vaders_bad_account = 
        std::make_unique<Checking_Account>("Vader_Bad", -100.0); 
        
        std::cout << *vaders_account << std::endl; 
    }
    catch(const IllegalBalanceException &ex) {
        std::cerr << ex.what() << std::endl; 
    }
    
    try{
        std::unique_ptr<Account> Chewys_account = 
        std::make_unique<Savings_Account>("Chewy", 1000.0); 
        
        std::cout << *Chewys_account << std::endl; 
        
        Chewys_account->withdraw(1500.0); 
        
        std::cout << *Chewys_account << std::endl; 
    }
   
    catch(const IllegalWithdrawalException &ex) {
        std::cerr << ex.what() << std::endl; 
    }
    
    std::cout << "Program finished successfully" << std::endl; 
    return 0; 
}
