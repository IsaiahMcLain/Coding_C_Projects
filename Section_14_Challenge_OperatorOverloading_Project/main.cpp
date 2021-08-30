/* Section Challenge 14, Operator Overloading
 * Program is meant to get more practice with OOP and with operator overloading 
 * main.cpp just contains test cases testing the overloaded member methods 
 * in diffrent scenarios and with diffrent operators. */
#include<iostream> 
#include<cstring> 
#include "str_h.h" 

int main()
{
    string_obj string_1 {"test1"};
    std::cout << string_1 << std::endl; //outputs object string
    
    std::cout << "String 1 made all upper case and then lower case" << std::endl; 
    std::cout << ++string_1 << std::endl; //TEST1
    std::cout << -string_1 << std::endl; //test1
    std::cout << string_1++ << std::endl; //TEST1
    
    string_obj user_choice; 
    std::cout << "Enter a name: " << std::endl; 
    std::cin >> user_choice; 
    
    std::cout << "User string repeated 3 times" << std::endl; 
    std::cout << user_choice * 3 << std::endl; 
    
    std::cout << "User string concatenated with another string" << std::endl; 
    std::cout << user_choice + string_1 << std::endl; 
    
    string_obj string_obj_l {"lol"}; 
    std::cout << "User string concatenated with another string and then multiplied 6 times" << std::endl; 
    std::cout << string_obj_l + user_choice << std::endl; 
    string_obj concat_user_choice {user_choice + string_obj_l}; 
    std::cout << concat_user_choice * 6 << std::endl; 
    
    std::cout << std::boolalpha << std::endl; 
    std::cout << string_1 << " is equal to " << user_choice << std::endl; 
    if(string_1 == user_choice) 
        std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
    std::cout << string_1 << " is less than " << user_choice << std::endl; 
    if(string_1 < user_choice)
           std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
    std::cout << string_1 << " greater than " << user_choice << std::endl; 
    if(string_1 > user_choice)
           std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
    std::cout << string_1 << " is not equal to " << user_choice << std::endl; 
    if(string_1 != user_choice)
           std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
        
    string_1 = user_choice; 
    
    std::cout << "Your choice is now string 1 as well" << std::endl; 
    
    std::cout << string_1 << " is equal to " << user_choice << std::endl; 
    if(string_1 == user_choice) 
        std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
    std::cout << string_1 << " is less than " << user_choice << std::endl; 
    if(string_1 < user_choice)
           std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
    std::cout << string_1 << " greater than " << user_choice << std::endl; 
    if(string_1 > user_choice)
           std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl; 
    std::cout << string_1 << " is not equal to " << user_choice << std::endl; 
    if(string_1 != user_choice)
           std::cout << "true" << std::endl; 
    else 
        std::cout << "false" << std::endl;
    
    return 0; 
}
