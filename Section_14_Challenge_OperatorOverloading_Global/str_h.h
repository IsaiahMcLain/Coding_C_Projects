#ifndef _str_h_ 
#define _str_h_

#include<iostream> 
#include<cstring> 

class string_obj
{
        //Enables object output 
        friend std::ostream &operator<<(std::ostream &out, const string_obj &rhs); 
        
        //Enables object input 
        friend std::istream &operator>>(std::istream &in, string_obj &rhs); 
        
        //Compares strings to see if they are the same 
        friend bool operator==(const string_obj &lhs, const string_obj &rhs);
        
        //Compares strings to see which one has greater ASCII value 
        friend bool operator<(const string_obj &lhs, const string_obj &rhs);
        
        //Compares strings to  see which one has lesser ASCII value
        friend bool operator>(const string_obj &lhs, const string_obj &rhs); 
        
        //Compares strings to tell user if strings aren't equal
        friend bool operator!=(const string_obj &lhs, const string_obj &rhs); 
        
        //Concatenates string objects or object and literal 
        friend string_obj operator+(const string_obj &lhs, const string_obj &rhs); 
        
        //Makes string all lower case 
        friend string_obj operator-(const string_obj &obj); 
        
        //Repeats string x amount of times
        friend string_obj operator*(const string_obj &obj, int rhs); 
        
        //Pre-increment object to be all capitals 
        friend string_obj &operator++(string_obj &obj); 
        
        //Post-increment object to be all capitals
        friend string_obj operator++(string_obj &obj, int); 
    
private: 
        //Attributes
    char *str; 
    
public: 
        //Methods 
        
        //No-Arguments Constructer 
        string_obj(); 
        
        //Overloaded Constructer 
        string_obj(const char *temp_s); 
        
        //Copy Constructor 
        string_obj(const string_obj &source_str); 
        
        //Move Constructor
        string_obj(string_obj &&source_str); 
        
        //Destructor 
        ~string_obj(); 
        
        //Copy's object and assigns
        string_obj &operator=(const string_obj &rhs); 
        
        //Move's object and assigns object's pointer to new object, dealocates old pointer
        string_obj &operator=(string_obj &&rhs); 
        
}; 

#endif //_str_h_