#ifndef _ILLEGAL_EXCEPTION_H_
#define _ILLEGAL_EXCEPTION_H_
#include <iostream>
//Header file and implementation for new exception classes to be used in this program. One is for an illegal
//balance the other is for an illegal withdrawal amount 

class IllegalBalanceException: public std::exception{
public:   
    IllegalBalanceException() noexcept = default; 
    ~IllegalBalanceException() = default;
    virtual const char* what() const noexcept {
        return "Illegal Balance, cannot have negative balance"; 
    }
}; 

#endif //_ILLEGAL_EXCEPTION_H_