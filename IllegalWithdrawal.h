#ifndef _ILLEGAL_WITHDRAWAL_H_
#define _ILLEGAL_WITHDRAWAL_H_
#include <iostream>
//Header file and implementation for new exception classes to be used in this program. One is for an illegal
//balance the other is for an illegal withdrawal amount 

class IllegalWithdrawalException: public std::exception{
public:
    IllegalWithdrawalException() noexcept = default; 
    ~IllegalWithdrawalException() = default; 
    virtual const char* what() const noexcept {
        return "Illegal Withdrawal, cannot withdraw more than you have"; 
    }
};

#endif //_ILLEGAL_WITHDRAWAL_H_