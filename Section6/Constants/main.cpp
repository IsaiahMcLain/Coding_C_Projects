/* -----------------------------------------------------------------------------
FILE:              Section_6.cpp
DESCRIPTION:      Program that calculates cleaning estimate based off user's amount of rooms desired to be 
cleaned.
COMPILER:          MinGW  C++ compiler
NOTES:             N/A
 -------------------------------------------------------------------------------*/

#include<iostream> 

using std::cout;
using std::cin;
using std::endl;


/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:      Main function that runs the program. 
RETURNS:           0
NOTES:             Will let user choose rooms and displays results to user. 
------------------------------------------------------------------------------- */
int main()
{
     
    cout << "Welcome to Isaiah's carpet cleaner shop!\n";
    cout << "-------------------------------------------------------------" << endl; 
    
    int small_rooms_cleaned {0};
    const double small_room_price {25.0}; 
    cout << "How many small rooms would you like cleaned? "; 
    cin >> small_rooms_cleaned; 
   

    int large_rooms_cleaned {0}; 
    const double large_room_price {35.0}; 
    cout << "How many large rooms would you like cleaned? "; 
    cin >> large_rooms_cleaned; 
    cout << endl; 
    
    cout << "Estimate of carpet cleaning service\n"; 
    cout << "-------------------------------------------------------" << endl; 
    cout << "Number of small rooms: " << small_rooms_cleaned << endl; 
    cout << "Number of large rooms: " << large_rooms_cleaned << endl; 
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
   

    cout << "Cost: $" 
            << (small_rooms_cleaned * small_room_price) + (large_rooms_cleaned * large_room_price)
            << endl; 
   
    const double sales_tax {.06}; 
    cout << "Tax: $" 
            << (small_rooms_cleaned * small_room_price + large_rooms_cleaned * large_room_price) * sales_tax 
            << endl << endl; 
   
    cout << "===================================" << endl;  
    cout << "Total cost: $" 
            << ((small_rooms_cleaned * small_room_price + large_rooms_cleaned * large_room_price) * sales_tax) 
            + (small_rooms_cleaned * small_room_price) + (large_rooms_cleaned * large_room_price) 
            << endl; 
    
    const int days_expiry {30}; 
    cout << "This estimate is valid for " << days_expiry <<" days" << endl; 
    
    return 0; 
}
