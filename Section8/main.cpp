/* -----------------------------------------------------------------------------
FILE:              Section8.cpp
DESCRIPTION:  Program where user enters amount of change they have and it is sorted 
into what quantites they can get 
COMPILER:      MinGW  C++ compiler
NOTES:   N/A
-------------------------------------------------------------------------------*/
#include<iostream> 

using namespace std; 
/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:    Funtion that runs all the calculations and displays the results to the user. 
RETURNS:           0
NOTES:     N/A 
------------------------------------------------------------------------------- */
int main()
{
    int Users_Change {0}; 
    cout << "Enter an amount in US change: ";
    cin >> Users_Change; 
    cout << endl; 
    
    //Initilizes US currency in how many cents go into each one 
    const int dollar_rate {100}; 
    const int quarter_rate {25}; 
    const int dime_rate  {10}; 
    const int nickel_rate {5}; 
    //No const int for pennies as it will be the remainder of what is left so a conversion is not needed 
    
    int dollars = Users_Change / dollar_rate; //Uses user's change to calculate how many dollars can be in it
    //This variable acts as a counter which moves throughout the change types until it's amount = 0 
    int balance = Users_Change - (dollars * dollar_rate); //Created new variable that user doesn't see 
    
    int quarters = balance / quarter_rate; //Now use balance instead of Users_Change as balance is the remainder
    balance -=  (quarters * quarter_rate); 
    
    int dimes = balance / dime_rate; 
    balance -= (dimes * dime_rate); 
    
    int nickels = balance / nickel_rate; 
    balance -= (nickels * nickel_rate); 
    
    int pennies = balance; //Pennies is equal to whatever number is left over, should be no greater than 4
    
    cout << "Your change is: " << endl; 
    cout << "-------------------------------------------------------" << endl; 
    cout << "Dollars: " << dollars << endl; 
    cout << "Quarters: " << quarters << endl; 
    cout << "Dimes: " << dimes << endl; 
    cout << "Pennies: " << pennies << endl; 

    return 0; 
}
