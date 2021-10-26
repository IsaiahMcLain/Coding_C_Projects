#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include<iostream> 
#include<string>

class I_Printable 
{
    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);

public: 
    //Print function used by all account classes 
    virtual void print(std::ostream &obj) const = 0; 
    
    //Virtual Destructor 
    virtual ~I_Printable() = default; 
};


#endif //_I_PRINTABLE_H_